void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  

}


//Verdes 2 5 8 
//Rojos 3 6 9 
//Blancos 4 7 10 

void loop() {

  //Prender verdes 3 segundos
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  delay(3000);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(8,LOW);
  delay(1);
  

   
  //Prender rojos y blancos 1 segundo
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  delay(1);
  
  //Prender verdes y rojos 2 segundos 
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(8,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(1);


//Terminar con una cadena de serpiente

  digitalWrite(2,HIGH);
  delay(250);
  digitalWrite(3,HIGH);
  delay(250);
  digitalWrite(4,HIGH);
  delay(250);
  digitalWrite(5,HIGH);
  delay(250);
  digitalWrite(6,HIGH);
  delay(250);
  digitalWrite(7,HIGH);
  delay(250);
  digitalWrite(8,HIGH);
  delay(250);
  digitalWrite(9,HIGH);
  delay(250);
  digitalWrite(10,HIGH);
  delay(250);
  digitalWrite(10,LOW);
  delay(250);
  digitalWrite(9,LOW);
  delay(250);
  digitalWrite(8,LOW);
  delay(250);
  digitalWrite(7,LOW);
  delay(250);
  digitalWrite(6,LOW);
  delay(250);
  digitalWrite(5,LOW);
  delay(250);
  digitalWrite(4,LOW);
  delay(250);
  digitalWrite(3,LOW);
  delay(250);
  digitalWrite(2,LOW);
  delay(250);


  
  
  

}
