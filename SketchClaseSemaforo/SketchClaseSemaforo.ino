  /*
  Nathalia Avila
  Práctica Semaforo
  11 Septiembre, 2019

  */
  /*
  RV 2 SEG 3 parpadeos 
  RA 1 segundos 
  VA 2 segundos
  */
void setup() {
  // put your setup code here, to run once:
  //Rojo
  pinMode(2,OUTPUT);
  //Verde
  pinMode(3,OUTPUT);
  //Amarillo
  pinMode(4,OUTPUT);
  //ROJO
  pinMode(5,OUTPUT);
  //VERDE
  pinMode(6,OUTPUT);
  //AMARILLO
  pinMode(7,OUTPUT);
  //ROJO
  pinMode(8,OUTPUT);
  //VERDE
  pinMode(9,OUTPUT);
  //AMARILLO
  pinMode(10,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  //Rojo verde dos segundos 3 BLINKS
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(2000);
    //Rojo AMARILLO 1 segundos 2 BLINKS
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  delay(1000);

   //verde AMARILLO 1 segundos 2 BLINKS

  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(2000);



  /*
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
  */



}
