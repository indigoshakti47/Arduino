void setup() {
  // put your setup code here, to run once:
  //1
  pinMode(INPUT,2);
  //2
  pinMode(INPUT,3);
  //3
  pinMode(INPUT,4);
  //4
  pinMode(INPUT,5);
  
  //A
  pinMode(OUTPUT,6);
  //B
  pinMode(OUTPUT,7);
  //C
  pinMode(OUTPUT,8);
  //D
  pinMode(OUTPUT,9);
  //E
  pinMode(OUTPUT,10);
  //F
  pinMode(OUTPUT,11);
  //G
  pinMode(OUTPUT,12);
  //PUNTO
  pinMode(OUTPUT,12);


}

void loop() {
  //0000
  if((digitalRead(2))==0&&(digitalRead(3))==0&&(digitalRead(4))==0&&(digitalRead(5))==0){
    //Imprime 0
     
  }
  //0001
  if((digitalRead(2))==0&&(digitalRead(3))==0&&(digitalRead(4))==0&&(digitalRead(5))==1){
    //Imprime 1 
  }
  //0010
  if((digitalRead(2))==0&&(digitalRead(3))==0&&(digitalRead(4))==1&&(digitalRead(5))==0){
    //Imprime 2 
  }
  //0011
  if((digitalRead(2))==0&&(digitalRead(3))==0&&(digitalRead(4))==1&&(digitalRead(5))==1){
    //Imprime 3 
  }
  //0100
  if((digitalRead(2))==0&&(digitalRead(3))==1&&(digitalRead(4))==0&&(digitalRead(5))==0){
    //Imprime 4
  }
  //0101
  if((digitalRead(2))==0&&(digitalRead(3))==1&&(digitalRead(4))==0&&(digitalRead(5))==1){
    //Imprime 5
  }
  //0110
  if((digitalRead(2))==0&&(digitalRead(3))==1&&(digitalRead(4))==1&&(digitalRead(5))==0){
    //Imprime 6
  }
  //0111
  if((digitalRead(2))==0&&(digitalRead(3))==1&&(digitalRead(4))==1&&(digitalRead(5))==1){
    //Imprime 7
  }
  //1000
  if((digitalRead(2))==1&&(digitalRead(3))==0&&(digitalRead(4))==0&&(digitalRead(5))==0){
    //Imprime 8
  }
  //1001
  if((digitalRead(2))==1&&(digitalRead(3))==0&&(digitalRead(4))==0&&(digitalRead(5))==1){
    //Imprime 9
  } else{
    //Imprime punto. 
  }
  

  
}
