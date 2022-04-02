#include "Stepper_28BYJ_48.h"

int paso = 0;
int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;

Stepper_28BYJ_48 stepper(in1,in2,in3,in4);



void setup() {
  Serial.begin(9600);
}

void loop() {
  char comando;
  if(Serial.available()>0){
    comando = Serial.read();
    switch(comando){
      case 'F':
      case 'f':
          paso = 5;
      break;
      case 'B':
      case 'b':
          paso = -5;
      break;
      
      case 's':
      case 'S':
      paso=0;
      break;
      }
    
    }

    stepper.step(paso);
    delay(100);
}
