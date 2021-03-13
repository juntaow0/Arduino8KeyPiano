#include <Tone.h>
#include "acat.h"      // preloaded song, portion of “A Cruel Angel’s Thesis”

#define Buzz1 12
#define Buzz2 11
#define Buzz3 10
#define clockPin 9      // shift in register
#define latchPin 8      // shift in register
#define dataPin 7       // shift in register
#define clockPinL 6     // shift out register
#define latchPinL 5     // shift out register
#define dataPinL 4      // shift out register
#define playButton 3 
#define modeSwitch 2
#define LED 13        // signal LED for mode switch

Tone tone1;         // tone objects
Tone tone2;
Tone tone3;

int mode = 0;       // mode flag
int playButtonCounter = 1;  // playButtonCounter % 2 == 0
int modeSwitchCounter = 1;  // so initial value cannot be 0
int playButtonState = 0;
int modeSwitchState = 0;
int lastPlay = 0;
int lastMode = 0;
int arrayLen = 0;     // music array length
int noteLength = 0;     // single note length
long noteIndex = 0;     // progress of a song
byte pattern = 72;      // 1001000, default pattern

// assign notes to each piano key
const int keys[] = {
  NOTE_C5, NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_C4};
  
void setup(void)
{
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, INPUT);
  pinMode(latchPinL, OUTPUT);
  pinMode(clockPinL, OUTPUT);
  pinMode(dataPinL, OUTPUT);
  pinMode(playButton, INPUT);
  pinMode(modeSwitch, INPUT);
  pinMode(LED, OUTPUT);
  tone1.begin(Buzz1);
  tone2.begin(Buzz2);
  tone3.begin(Buzz3);
}

void loop()
{
  // state change detection
  modeSwitchState = digitalRead(modeSwitch);
  if (modeSwitchState != lastMode){
    if (modeSwitchState == HIGH){
      // increase if button is pressed and released
      // holding button will not increase this value
      modeSwitchCounter++;
    }
  }
  lastMode = modeSwitchState;           // update lastMode for next iteration
  // 1 key press and release to change state
  if (modeSwitchCounter % 2 == 0){
    mode = 1;                 // mode switch pressed, enter music player mode
    digitalWrite(LED, HIGH);          // turn green LED on
    arrayLen = measures * timeSig * precision;  // calculate music and note length
    noteLength = (60000/(bpm*precision));     // 1 minute has 60000 milliseconds
  }
  else{
    mode = 0;                 // do not enter music player mode
    digitalWrite(LED, LOW);
    noteIndex = 0;                // resets song progress
    lastPlay = 0;               // as well as play button states
    playButtonState = 0;
    playButtonCounter = 1;
  }
  lastPlay = playButtonState;
  if (mode){
    // state change detection for play button
    // if music player mode is not on
    // play button is locked
    playButtonState = digitalRead(playButton);
    if (playButtonState != lastPlay){
      if (playButtonState == HIGH){
        playButtonCounter++;
      }
    }
    lastPlay = playButtonState;
    if (playButtonCounter % 2 == 0){
      // if music is not over
      if (noteIndex < arrayLen){
        musicPlayer(Sa,Sb,Sc,Pa,Pb,Pc);
        noteIndex++;
        myDelay(noteLength);        // delay to play the whole note
      }
    }
    }
  else{
    // stays in piano mode
    digitalWrite(latchPin,1);         // set latch pin to 1 to collect parallel data
    delayMicroseconds(20);            // debounce
    digitalWrite(latchPin,0);         // set it to 0 to transmit data serially
    pattern = shiftIn(dataPin, clockPin);   // collect each bit into a byte in MSB order
    digitalWrite(latchPinL,0);          // set latch pin to 0 so the LEDs don't change
    shiftOut(dataPinL, clockPinL, LSBFIRST, pattern); // shift out bits in LSB order
    digitalWrite(latchPinL,1);          // set latch pin to 1 to turn on LEDs
    int pressed[] = {0, 0, 0};
    checkKey(pattern, pressed, keys);     // record up to three pressed key
    playNotes(pressed);             // play the recorded keys
  }
}
/*
 * Purpose: check what keys are played and record up to three keys
 * Parameters: 
 *    byte pattern: bit representation of keys
 *    int pressed[]: array of pressed keys
 *    const int keys[]: assigned notes
 * Return:
 *    None
 */
void checkKey(byte pattern, int pressed[], const int keys[])
{
  int i = 0;
  int j = 0;
  // while bit checking not finished
  // and recorded keys are not full
  while ((i<8) && (j<3)){
    if (pattern & (1 << i)){
      pressed[j] = keys[i];         // use assigned keys as reference
      j++;
    }
    i++;
  }
}

/*
 * Purpose: play notes using buzzers
 * Parameters: 
 *    int pressed[]: notes to be played
 * Return:
 *    None
 */
void playNotes(int pressed[])
{
  // check each position in the array
  // and play if there is a value
  if (pressed[0]){
    tone1.play(pressed[0]);
  }
  else{
    tone1.stop();
  }
  if (pressed[1]){
    tone2.play(pressed[1]);
  }
  else{
    tone2.stop();
  }
  if (pressed[2]){
    tone3.play(pressed[2]);
  }
  else{
    tone3.stop();
  }
}

/*
 * Purpose: play a preloaded song
 * Parameters: 
 *    int notes1[]: track 1, played by buzzer 1, main melody recommanded
 *    int notes2[]: track 2, played by buzzer 2, harmony or bass recommanded
 *    int notes3[]: track 3, played by buzzer 3, percussion recommanded
 *    int8_t pause1[]: note length data for track 1, use signed byte to save space
 *    int8_t pause2[]: note length data for track 2
 *    int8_t pause3[]: note length data for track 3
 * Return:
 *    None
 */
void musicPlayer(int notes1[], int notes2[], int notes3[], int8_t pause1[], int8_t pause2[], int8_t pause3[])
{
  /* In each loop, up to three notes are played simultaneously
   * Music progress is determined by noteIndex
   * Note duration is determined by precision
   * For example, precision 4 means the smallest note is sixteenth note
   * In this case, noteLength represents a sixteenth note's duration
   * and each item in the arrays is a sixteenth note
   * Note length data determines what note is really played over time
   * It has three types of values: -10, 0, 10, in milliseconds
   * For example, in precision 4
   * to play a quarter note, four sixteenth notes will be played 
   * but the note length data will be 10, 10, 10, -10
   * so that the four notes sounds connected
   */
    if (notes1[noteIndex]){
    // the play function takes frequency and duration
    // adding 10 milliseconds to noteLength can connect two notes
    // subtracting 10 milliseconds can disconnect two notes clearly
    tone1.play(notes1[noteIndex], noteLength+pause1[noteIndex]);
    }
    if (notes2[noteIndex]){
    tone2.play(notes2[noteIndex], noteLength+pause2[noteIndex]);
    }
    if (notes3[noteIndex]){
    tone3.play(notes3[noteIndex], noteLength+pause3[noteIndex]);
    }
}

/*
 * Purpose: shift in input bits to form a byte, replace default shiftin function
 * Parameters: 
 *    int DataPin: data pin number
 *    int ClockPin: clock pin number
 * Return:
 *    byte representation of input
 */
byte shiftIn(int DataPin, int ClockPin){
  int one = 0;                // data pin value
  byte pattern = 0;             // return value
  // in MSB order
  for (int i= 7; i>=0; i--){
    // set clock pin to 0
    // to change data pin state
    digitalWrite(ClockPin, 0); 
    delayMicroseconds(0.2);
    one = digitalRead(DataPin);
    if (one){
      // if data pin has value
      // add the bit to pattern
      pattern = pattern | (1 << i);
    }
    digitalWrite(ClockPin, 1);
    // high to low drop of the clock pin 
    // will cause the data pin to change state 
    // based on the value of the next bit in serial flow.
  }
  return pattern ;
}

/*
 * Purpose: delay for given milliseconds, replace default delay function
 * Parameters: 
 *    int ms: duration of delay in milliseconds
 * Return:
 *    None
 */
void myDelay(int ms)
{
  for (int i = 0; i < ms; i++){
    delayMicroseconds(1000);
  }
}
