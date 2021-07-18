
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);

}

void loop() {
  int state=0;
  state = digitalRead(3);
  Serial.print(state);
  

  if(state==1){
    digitalWrite(2,HIGH);
    delay(100);
  } else {
    digitalWrite(2, LOW);
    delay(100);
  }

}
