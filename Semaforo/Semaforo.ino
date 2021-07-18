volatile boolean elemenope = true;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(8),why,CHANGE);
  
}

void loop() {
  // VERDE 11 2 SEG
  // AMARILLO 12 1 SEG
  // ROJO 13 2 SEG
//WHILE
  while(elemenope){
  digitalWrite(11,HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  delay(1);
 
  if (elemenope){

  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1);
    
  } else {
    break;
  }
  if (elemenope){
    
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(1);
    
  } else{
    break;
  }
    
  }//WHILE ACABA 

}

void why(){

  if(digitalRead(8)==1){
    elemenope=false;
    
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);


  
  loop();
  
}else {
  elemenope=true;
}
}
