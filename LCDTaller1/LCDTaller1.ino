#include <LiquidCrystal_I2C.h> // Libreria LCD_I2C
LiquidCrystal_I2C lcd(0x3f,16,2); // si no sale con esta direccion se puede usar (0x3f,16,2) || (0x27,16,2)  ||(0x20,16,2) 

int c=0;
int g=0;
int carry=0;
float voltaje=0;

void setup() {
  pinMode(A0,INPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  
  Serial.begin(9600);
}

void loop() {

  

  

  if(digitalRead(A0)==1){
    if(c==0){
    lcd.clear();
    Serial.print("Nathalia\n00000141709\n");
    lcd.setCursor(0,0);
    lcd.print("Nathalia Avila"); 
    lcd.setCursor (0,1);
    lcd.print("0000141709");
    delay(100);
    }
    c++;
  }
  
  if(digitalRead(A0)==1){
    if(c==1){
      for(int i=0;i<=1000;i++){
      for(int i=0;i<=100;i++){
        lcd.clear();
        Serial.print(i+"\n");
        lcd.setCursor(0,0);
        lcd.print(i); 
        delay(500);
        if(digitalRead(A0)==1){
          c++;
          carry=1;
          break;
        }
      }
      if(carry!=0){
          break;
        }
      }
    
    }
  }

  if(digitalRead(A0)==1){
    if(c==2){
      for(int i=0;i<=1000;i++){
        
        lcd.clear();
        Serial.print(i+"\n");
        lcd.setCursor(0,0);
        lcd.print(i);
        lcd.setCursor (0,1);
        if(analogRead(A0)==0){
        lcd.print(20);
        }else
        if(analogRead(A0)==1021){
        lcd.print(200);
        }
        g = i; 
        delay(500);
        if(digitalRead(A0)==1){
          c++;
          break;
          
        }
      }
      
    
    }
  }

  if(digitalRead(A0)==1){
    if(c==3){

        lcd.clear();
        Serial.print(g+"\n");
        lcd.setCursor(0,0);
        lcd.print(g); 
        lcd.setCursor (0,1);
        if(analogRead(A0)==0){
        lcd.print(20);
        }else
        if(analogRead(A0)==1021){
        lcd.print(200);
        }
        delay(500);
      
    c++;
    }
  }
 }
