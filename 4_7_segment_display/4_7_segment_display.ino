#include "SevSeg.h"

SevSeg sevseg; //Instantiate a seven segment controller object

 void setup() {
 byte numDigits = 4; 
 byte digitPins[] = {13, 12, 11, 10};
 
 byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins); 
// If your display is common anode type, please edit comment above line and uncomment below line
// sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
sevseg.setBrightness(20);
}

void loop() {
 static unsigned long timer = millis();
 static int deciSeconds = 0;


 
 sevseg.setNumber(3141, 3);

 sevseg.refreshDisplay(); // Must run repeatedly
}
