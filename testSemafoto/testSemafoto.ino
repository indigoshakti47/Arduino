void setup() {
  // put your setup code here, to run once:
  pinMode(A5,INPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(A5)==1){
    digitalWrite(11,HIGH);
    
  } else{
    digitalWrite(11,LOW);
  }
}
