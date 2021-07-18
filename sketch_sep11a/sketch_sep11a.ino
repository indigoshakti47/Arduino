// Programa para pagar y prender un LED 
// 11 de Septiembre, 2019.
// Nathalia Avila.
// Versión 1.0

void setup() {
  
pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(10000);

}
