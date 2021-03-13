int Sa [] = {
		NOTE_C4,NOTE_C4,NOTE_C4,NOTE_C4,NOTE_DS4,NOTE_DS4,NOTE_DS4,NOTE_DS4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_DS4,NOTE_DS4,NOTE_DS4,NOTE_F4,NOTE_F4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_AS4,NOTE_AS4,NOTE_GS4,NOTE_GS4,
		NOTE_G4,NOTE_F4,NOTE_F4,NOTE_G4,NOTE_G4,NOTE_G4,0,0,NOTE_G4,NOTE_G4,
		NOTE_G4,NOTE_G4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_C5,NOTE_C5,
		NOTE_C5,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_DS4,NOTE_DS4,NOTE_AS4,NOTE_AS4,
		NOTE_AS4,NOTE_AS4,NOTE_G4,NOTE_G4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,
		NOTE_AS4,NOTE_C5,NOTE_C5,NOTE_F4,NOTE_G4,NOTE_AS4,
		NOTE_C4,NOTE_C4,NOTE_C4,NOTE_C4,NOTE_DS4,NOTE_DS4,NOTE_DS4,NOTE_DS4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_DS4,NOTE_DS4,NOTE_DS4,NOTE_F4,NOTE_F4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_AS4,NOTE_AS4,NOTE_GS4,NOTE_GS4,
		NOTE_G4,NOTE_F4,NOTE_F4,NOTE_G4,NOTE_G4,NOTE_G4,0,0,NOTE_G4,NOTE_G4,
		NOTE_G4,NOTE_G4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_C5,NOTE_C5,
		NOTE_C5,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_DS4,NOTE_DS4,NOTE_AS4,NOTE_AS4,
		NOTE_AS4,NOTE_AS4,NOTE_G4,NOTE_G4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,
		NOTE_AS4,NOTE_C5,NOTE_C5,0,0,0,
		NOTE_C4,NOTE_C4,NOTE_C4,NOTE_C4,NOTE_DS4,NOTE_DS4,NOTE_DS4,NOTE_DS4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_DS4,NOTE_DS4,NOTE_DS4,NOTE_F4,NOTE_F4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_AS4,NOTE_AS4,NOTE_GS4,NOTE_GS4,
		NOTE_G4,NOTE_F4,NOTE_F4,NOTE_G4,NOTE_G4,NOTE_G4,0,0,NOTE_G4,NOTE_G4,
		NOTE_G4,NOTE_G4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_C5,NOTE_C5,
		NOTE_C5,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_DS4,NOTE_DS4,NOTE_AS4,NOTE_AS4,
		NOTE_AS4,NOTE_AS4,NOTE_G4,NOTE_G4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,
		NOTE_AS4,NOTE_C5,NOTE_C5,0,0,0};
int8_t Pa [] = {
		10,10,10,-10,10,10,10,-10,10,10,-10,10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,-10,10,-10,10,10,-10,0,0,
		10,10,10,-10,10,10,10,-10,10,10,-10,10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,10,10,-10,10,-10,-10,-10,-10,
		10,10,10,-10,10,10,10,-10,10,10,-10,10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,-10,10,-10,10,10,-10,0,0,
		10,10,10,-10,10,10,10,-10,10,10,-10,10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,10,10,-10,10,-10,0,0,0,
		10,10,10,-10,10,10,10,-10,10,10,-10,10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,-10,10,-10,10,10,-10,0,0,
		10,10,10,-10,10,10,10,-10,10,10,-10,10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,10,10,-10,10,-10,0,0,0};
int Sb [] = {
		NOTE_C2,0,NOTE_C2,0,NOTE_C2,0,NOTE_DS2,NOTE_DS2,
		NOTE_F2,NOTE_F2,0,NOTE_F2,NOTE_F2,NOTE_F2,NOTE_C2,NOTE_C2,
		NOTE_AS1,0,NOTE_AS1,0,NOTE_AS1,0,NOTE_D2,NOTE_D2,
		NOTE_DS2,NOTE_DS2,0,NOTE_DS2,NOTE_DS2,NOTE_DS2,NOTE_D2,NOTE_D2,
		NOTE_C2,0,NOTE_C2,0,NOTE_C2,0,NOTE_DS2,NOTE_DS2,
		NOTE_F2,NOTE_F2,0,NOTE_F2,NOTE_F2,NOTE_F2,NOTE_C2,NOTE_C2,
		NOTE_AS1,0,NOTE_AS1,0,NOTE_AS1,0,NOTE_D2,NOTE_D2,
		NOTE_DS2,NOTE_DS2,0,NOTE_DS2,0,NOTE_F5,NOTE_G5,NOTE_AS5,
		NOTE_C6,NOTE_C6,0,0,NOTE_C2,0,NOTE_DS2,NOTE_DS2,
		NOTE_F2,NOTE_F2,0,NOTE_F2,NOTE_F2,NOTE_F2,NOTE_C2,NOTE_C2,
		NOTE_AS1,0,NOTE_AS1,0,NOTE_AS1,0,NOTE_D2,NOTE_D2,
		NOTE_DS2,NOTE_DS2,0,NOTE_DS2,NOTE_DS2,NOTE_DS2,NOTE_D2,NOTE_D2,
		NOTE_C2,0,NOTE_C2,0,NOTE_C2,0,NOTE_DS2,NOTE_DS2,
		NOTE_F2,NOTE_F2,0,NOTE_F2,NOTE_F2,NOTE_F2,NOTE_C2,NOTE_C2,
		NOTE_AS5,0,NOTE_AS5,0,NOTE_G5,0,NOTE_AS5,0,
		NOTE_AS5,NOTE_AS5,NOTE_AS5,NOTE_C6,NOTE_C6,0,NOTE_AS5,NOTE_C6,
		NOTE_C5,NOTE_C5,0,0,NOTE_DS5,NOTE_DS5,0,NOTE_E5,NOTE_F5,NOTE_F5,NOTE_F5,
		NOTE_DS5,NOTE_DS5,NOTE_DS5,NOTE_F5,0,NOTE_F5,0,NOTE_F5,0,NOTE_AS5,0,
		NOTE_GS5,0,NOTE_G5,NOTE_F5,0,NOTE_G5,NOTE_G5,0,0,0,NOTE_G5,NOTE_G5,0,0,
		NOTE_AS5,NOTE_AS5,NOTE_AS5,0,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_F5,NOTE_F5,NOTE_F5,
		NOTE_DS5,NOTE_DS5,NOTE_AS5,0,NOTE_AS5,0,NOTE_G5,0,NOTE_AS5,0,NOTE_AS5,NOTE_AS5,
		NOTE_AS5,NOTE_C6,NOTE_C6,0,0,0};
int8_t Pb [] = {
		-10,0,-10,0,-10,0,10,-10,-10,-10,0,10,-10,-10,10,-10,
		-10,0,-10,0,-10,0,10,-10,-10,-10,0,-10,10,-10,10,-10,
		-10,0,-10,0,-10,0,10,-10,-10,-10,0,10,-10,-10,10,-10,
		-10,0,-10,0,-10,0,10,-10,-10,-10,0,-10,-10,-10,-10,-10,
		10,-10,0,0,-10,0,10,-10,-10,-10,0,10,-10,-10,10,-10,
		-10,0,-10,0,-10,0,10,-10,-10,-10,0,-10,10,-10,10,-10,
		-10,0,-10,0,-10,0,10,-10,-10,-10,0,10,-10,-10,10,-10,
		-10,0,-10,0,-10,0,-10,0,10,10,-10,10,-10,0,-10,-10,
		10,-10,0,0,10,-10,0,-10,10,10,-10,10,10,-10,-10,0,
		-10,0,-10,0,-10,0,-10,0,-10,-10,0,10,-10,0,0,0,
		10,-10,0,0,10,10,-10,0,10,10,-10,10,10,-10,10,-10,
		-10,0,-10,0,-10,0,-10,0,10,10,-10,10,-10,0,0,0};
int Sc [] = {
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,
		NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_C5,NOTE_C5,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_B1,NOTE_B1,NOTE_FS2,NOTE_FS2,
		NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_E2,NOTE_E2,0,0,
		NOTE_AS1,NOTE_AS1,NOTE_B1,NOTE_B1,
		NOTE_B1,NOTE_B1,NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_B1,NOTE_B1,NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_B1,NOTE_B1,NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_B1,NOTE_B1,NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_B1,NOTE_B1,NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_B1,NOTE_B1,NOTE_B1,NOTE_B1,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,
		NOTE_E2,NOTE_E2,NOTE_E2,NOTE_E2,0,0,0,0};
int8_t Pc [] = {
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,-10,-10,-10,-10,-10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,10,-10,10,-10,10,-10,
		10,-10,0,0,10,-10,10,-10,
		10,10,10,-10,10,10,-10,-10,10,10,10,-10,10,10,-10,-10,
		10,10,10,-10,10,10,-10,-10,10,10,10,-10,10,10,-10,-10,
		10,10,10,-10,10,10,-10,-10,10,10,10,-10,10,10,-10,-10,
		10,-10,10,-10,10,-10,10,-10,10,10,-10,-10,0,0,0,0};
int measures = 12;
int timeSig = 4;
int bpm = 120;
int precision = 4;
