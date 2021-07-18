//13 7 salidas 
//A0 Y A1 entradas
volatile boolean interruptor = false;
volatile boolean a = true;
volatile boolean b = true;
volatile boolean c = false;
int valorPot1 = 0;  
int valorPot2 = 0;


void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT); //LED VERDE
  pinMode(12,OUTPUT); //LED AZUL
  pinMode(11,OUTPUT); //LED AMARILLO
  pinMode(10,OUTPUT); //LED ROJO 
  pinMode(9,OUTPUT); //MOTOR
  pinMode(8,OUTPUT); //LED BLANCO
  pinMode(2,INPUT); //BOTON FINALIZAR
  pinMode(6,INPUT); //BOTON COMENZAR
  attachInterrupt(digitalPinToInterrupt(2),loop2,HIGH); 
}

void loop() {
  //Si se presiona el botón comienza
  //Definir intervalos del potenciometro para generar acciones.
  while(interruptor){
   if(digitalRead(6)==HIGH){
     c=true;
    }
   if(interruptor && c){
    do{
      Serial.println(analogRead(A0));
      Serial.println(analogRead(A1));
    if(interruptor && analogRead(A0)<500&&a){
      digitalWrite(13,HIGH);
    }else{
      a=false;
      digitalWrite(13,LOW);
    }
    if(interruptor && analogRead(A1)<500&&b){
      digitalWrite(12,HIGH);
    }else{
      b=false;
      digitalWrite(12,LOW);
    }
    delay(1);
  }while(interruptor && analogRead(A0)<500||analogRead(A1)<500);
     digitalWrite(13,LOW);
     digitalWrite(12,LOW);
     
     a=true;
     b=true;
   do{
      Serial.println(analogRead(A0));
      Serial.println(analogRead(A1));
    if(interruptor && analogRead(A0)>0&&a){
      digitalWrite(11,HIGH);
    }else{
      a=false;
      digitalWrite(11,LOW);
    }
    if(interruptor && analogRead(A1)>0&&b){
      digitalWrite(10,HIGH);
    }else{
      b=false;
      digitalWrite(10,LOW);
    }
    delay(1);
  }while(interruptor && a||b); 
     
     digitalWrite(10,LOW); 
     digitalWrite(11,LOW);
     digitalWrite(9,HIGH);
     delay(5000);
     digitalWrite(9,LOW);
     digitalWrite(8,HIGH);
     delay(5000);
     digitalWrite(8,LOW);
     /////////////////////////////  
    Serial.println("no");
  } else{
    break;
    }     
  }

  
}

void loop2(){

  while(digitalRead(2)==1){
    interruptor=false;
    c=false;
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    delay(10000);     
}
}
