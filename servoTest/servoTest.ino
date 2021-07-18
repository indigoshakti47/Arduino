#include<Servo.h>
Servo servito;

void setup() {
  
  // put your setup code here, to run once:
  pinMode(5, INPUT);
  servito.attach(9);
  servito.write(0);

}

void loop() {
  if(digitalRead(5)==HIGH){
    servito.write(90);
    delay(500);
  } else{
    servito.write(0);
    delay(500);
  }

}
