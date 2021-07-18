#include "SevSeg.h" 
SevSeg sevseg; 
int sensorValue;
int tempe = 0; 
unsigned long start= 0; 
 
void setup() 
{
  byte numDigits = 4; 
  byte digitPins[] = {2, 3, 4, 5}; 
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13}; 
  sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins); 
  sevseg.setBrightness(10);
  Serial.begin(9600);
  changeT();  
}
 
void loop() 
{
 

  if(millis() > (start + 1000)){
    start = millis();
    changeT();
  }
 
  sevseg.refreshDisplay(); 
 
}
 
void changeT() {
    sensorValue = analogRead(A0); //Auslesen des Sensorwertes.
    tempe = (4.9 * sensorValue * 100.0)/1024.0;  //Umwandeln des Sensorwertes mit Hilfe des "map" Befehls.
    sevseg.setNumber(tempe);  
    Serial.println(tempe);
}
