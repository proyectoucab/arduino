#include<AFMotor.h>

AF_DCMotor motor(1);

const int ENA = 8;
const int IN1 = 9;
const int IN2 = 10;

char entrada = 'F';


void setup() {

 
  Serial.begin(9600);
  
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(ENA, LOW);


}

void loop() {

  if(Serial.available() >0){
    // lo que reciba del teclado, se guardarà en la variable comando
    entrada = Serial.read();

    switch(entrada){
      case 'F':
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(ENA, HIGH);
        break;

        case 'S':
          // MOtor no gira
            digitalWrite(ENA,LOW);
            
         break;

         case 'B':
          digitalWrite(IN1,LOW);
          digitalWrite(IN2,HIGH);
          digitalWrite(ENA, HIGH);        
         
         break;
      
      }
    delay(500);
    }
  }

  // motor gira en sentido inverso
  
