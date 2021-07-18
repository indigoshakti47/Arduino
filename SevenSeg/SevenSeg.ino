
#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object

void setup() {
  // put your setup code here, to run once:

  byte numDigits = 4;   
  byte digitPins[] = {2, 3, 4, 5}; //Digits: 1,2,3,4 <--put one resistor (ex: 220 Ohms, or 330 Ohms, etc, on each digit pin)
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13}; //Segments: A,B,C,D,E,F,G,Period

  sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(10); 
}

void loop() {
  //local vars
  static byte decPlace = 0;
  
  sevseg.setNumber(8888,decPlace);
  decPlace++;
  decPlace %= 4; //rollover back to 0 once variable gets to 4; To anyone wondering: the % is called the "modulo" operator

  sevseg.refreshDisplay(); // Must run repeatedly; don't use blocking code (ex: delay()) in the loop() function or this won't work right
}
