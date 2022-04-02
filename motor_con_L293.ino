#include <AFMotor.h>

AF_DCMotor motor (1);


void setup() {
 Serial.begin (9600);
 motor.setSpeed (180);
 
}

void loop() {
  char comando;
 if(Serial.available()>0){
  comando=Serial.read();
  switch (comando){
    case 'F':
     case 'f':
     motor.run (FORWARD);
     break;
     case'B':
     case 'b':
      motor.run (BACKWARD);
      break;
     case'S':
     case 's':
      motor.run (RELEASE);
      break;
      
  }
  delay (100);
 }

}
