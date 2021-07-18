/* 
* Configuracion de la libreria asincronica del
* arduino, esto para permitirnos diferentes
* tiempos de señal
*/
#include "AsyncTaskLib.h"


/*
* Declaracion de las variables inciales, ledPins[]
* se refiere al contador de 3 bits binario ascendente
* count es la cuenta necesaria para el metodo
* dispBinary(byte n), el array_size detecta la cantidad
* de bits para el contador
*/
int ledPins[] = {2,3,4};
byte count = 0;
int array_size = sizeof(ledPins) / sizeof(ledPins[0]);


/*
* Tarea asincronica, cambia el estado del pin 13 de
* HIGH a LOW y viceversa en el intervalo de 1 segundo.
*/
AsyncTask asyncTask(1000, true, []() { 
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
});


/*
* Setup de los pines iniciales y el puerto de impresion,
* el cual es necesario para la comunicacion con PySerial
* en el archivo Arduino.py
*/
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4, OUTPUT);
  //pinMode(10, OUTPUT);
  pinMode(5, INPUT);
  //pinMode(6, INPUT);
  
  Serial.begin(9600);

  asyncTask.Start();

}


/*
* Loop principal, aqui se actualiza tanto la tarea asincronica
* como el contador de 3 bits, cada vez que se cambia la seleccion
* de datos, se imprime los bits obtenidos en el Serial 9600,
* la señal de reloj (pines 10,11,12) se introduce en un integrado 
* 74LS151 que es un multiplexor de 8 a 1 lineas y el pin 9 registra 
* los datos obtenidos por este multiplexor
*/
void loop() {
  asyncTask.Update();
  dispBinary(count++);
  if (count == 16){
    count = 0;  
  }
  Serial.println(String(digitalRead(ledPins[2])) + "-" + String(digitalRead(ledPins[1])) + "-" + String(digitalRead(ledPins[0]))+ "-" + String(digitalRead(5)));
  //delay(500);

  String enviar="";
    for(int i=0;i<8;i++) {
    
    multiplexar(i);
    enviar = enviar + String(digitalRead(5))+String("-");
    //Serial.println(enviar);
    //delay(100);
    }
    //Serial.println("botella 9");
    //enviar = enviar + String(digitalRead(6));
    //Serial.println(enviar);
}

void multiplexar(int i){
  if(i==0){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    //Serial.println("0-0-0-0-0-0-0-0"+String(digitalRead(6)));
    }
  else if(i==1){ 
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    //Serial.println("botella 2");
    }
  else if(i==2){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    //Serial.println("botella 3");
    }
  else if(i==3){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    //Serial.println("botella 4");
    }
  else if(i==4){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    //Serial.println("botella 5");}
  }else if(i==5){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    //Serial.println("botella 6");}
  }else if(i==6){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    //Serial.println("botella 7");
    }else if(i==7){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    //Serial.println("botella 8");
    }
  }


/*
* Esta funcion convierte un numero en base 10 a su equivalente 
* en binario, por ejemplo: 
* @args ( byte = 3 ) 
* @return 011
*/
void dispBinary(byte n){
  for (byte i = 0; i < array_size; i++){
    digitalWrite(ledPins[i], n & 1);
    n = n/2;
  }
}
