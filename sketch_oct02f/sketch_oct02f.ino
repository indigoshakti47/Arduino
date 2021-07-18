int randNumber;
int numero=15;
int jugador1;
int jugador2;
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

void setup() {

  Serial.begin(9600);
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT); 
  
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  
  
  Serial.begin(9600);

}




void loop() {


//Se activa el primer digito del display.   
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  
  //Si el número aleatorio es 0, se prende ese número 
  if(numero==0){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);    
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);   
  delay(2000);
     }

  //Si el número aleatorio es 1, se prende ese número    
  if(numero==1){
      //1
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);   
  delay(2000);    
  }

  //Si el número aleatorio es 2, se prende ese número 
 if(numero==2){
    //2
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);     
  delay(2000);
  
 }

 //Si el número aleatorio es 3, se prende ese número  
 if(numero==3){ 
    //3
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);     
  delay(2000);  
  
 }
 //Si el número aleatorio es 4, se prende ese número 
  if(numero==4){ 
    
  //4
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
  delay(2000); 
    
  }
  //Si el número aleatorio es 5, se prende ese número 
   if(numero==5){     
  //5
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
  delay(2000); 
    
   }
   //Si el número aleatorio es 6, se prende ese número 
    if(numero==6){ 

  //6
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
  delay(2000); 
    }
    
    //Si el número aleatorio es 7, se prende ese número 
   if(numero==7){
      //7
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);   
  delay(2000); 
     
   }
//Si el número aleatorio es 8, se prende ese número 
   if(numero==8){
      //8
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);   
  delay(2000); 
    
   }
//Si el número aleatorio es 9, se prende ese número 
   if(numero==9){
    
  //9
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);   
  delay(2000); 
    
   }
   //Si el número aleatorio es 10, se prende el 1 en el primer display y el cero en el segundo display
   if(numero==10){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(2000);
  
   //Se prende el número 0 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);  
    
   }

      if(numero==11){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 1 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);  
    
   }

         if(numero==12){

    //Se prende el número 1 en el primer display
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 4 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);     
   }

     if(numero==13){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 3 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);     
   }

    if(numero==14){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 4 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);    
   }

    if(numero==15){

    //Se prende el número 1 en el primer display
    
    digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 4 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
   }

       if(numero==16){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 6 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);  
   }

         if(numero==17){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 7 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);  
   } 

    if(numero==18){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 8 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);   
   } 

               if(numero==19){

    //Se prende el número 1 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH); 
  delay(1);
  
   //Se prende el número 9 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);  
   } 

    if(numero==20){

    //Se prende el número 2 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);  
  delay(1);
  
   //Se prende el número 0 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);  
   }


    if(numero==21){

    //Se prende el número 2 en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);  
  delay(1);
  
   //Se prende el número 1 en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);    
   }

   if(jugador1>21 || jugador2>21){

    //Se prende el número - en el primer display
    
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);  
  delay(1);
  
   //Se prende el número - en el segundo display

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);  
   }


   


}
