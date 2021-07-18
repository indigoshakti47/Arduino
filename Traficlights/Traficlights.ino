void setup() {
  // put your setup code here, to run once:
  pinMode(A5,INPUT)
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  // VERDE 11 2 SEG
  // AMARILLO 12 1 SEG
  // ROJO 13 2 SEG

  digitalWrite(11,HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  delay(1);

  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1);

  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(1);


  
  
  

}
