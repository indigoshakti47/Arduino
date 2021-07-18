/*  
Nathalia Avila
Primer Taller- Versión 1.0
Septiembre 18, 2019
*/
int count=0;

void setup() {
  //Pines para botones (Input)
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  //Pines para LEDs (Output)
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  //Primer botón sin presionar
 if((digitalRead(2))==0){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1);
  }

  if((digitalRead(2))==1){
    delay(100);
  if((digitalRead(4))==0){

  //Primer botón presionado y P3 sin presionar
  //Prende de a dos LEDs hasta llegar al último y después se devuelve. 
  if((digitalRead(2))==1&&(digitalRead(4))==0){
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(1000);
  
  if((digitalRead(2))==1){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1000);
  
  }if((digitalRead(2))==1){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay(1000);
  }
  }}}

  //Segundo botón está presionado
  //Se prende intercalado


  if((digitalRead(3))==1){
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  delay(1);
  
  if((digitalRead(3))==1){
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  delay(1);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  delay(1);
  
  }if((digitalRead(3))==1){
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  delay(1);
  }
  }

  //Tecer botón presionado y P1 sin presionar 
  /*
   * Rojo Amarillo (1 seg) 2 pulsaciones
   * Verde Amarillo (2 seg) 3 pulsaciones
   * Amarillo Verde (1,5 seg) 4 pulsaciones
  */

  if(digitalRead(4)==1){
    delay(100);
  if(digitalRead(2)==0){

  if((digitalRead(4))==1&&(digitalRead(2))==0){
    //Rojo Amarillo (1 seg) 2 pulsaciones
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  delay(1000);
  
  if((digitalRead(4))==1&&(digitalRead(2))==0){
    //Verde Amarillo (2 seg) 3 pulsaciones
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(2000);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(2000);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(2000);
  }if((digitalRead(4))==1&&(digitalRead(2))==0){
    //Amarillo Verde (1,5 seg) 4 pulsaciones
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1500);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1500);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1500);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1500);
  }
  }}}

//Primer y tercer botón presionados
//Autofantastico

 if((digitalRead(2))==1&&(digitalRead(4))==1){
  delay(100);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(400);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1);
  if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(400);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(400);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(400);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(400);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(400);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(400);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(400);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(400);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(400);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(400);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(400);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1);
  }if((digitalRead(2))==1&&(digitalRead(4))==1){
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(400);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1);
  }
  }

}
