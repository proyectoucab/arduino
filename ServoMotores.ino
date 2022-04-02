#include <Servo.h>

Servo servoMotor;

void setup(){
  Serial.begin(9600);
  servoMotor.attach(9);
  servoMotor.write(90);
}

void loop(){
  char comando;
  
  if(Serial.available() > 0){
    comando = Serial.read();
    switch(comando){
      case 'S': 
      case 's':     
        servoMotor.write(90);
        Serial.println("Stop");
        break;
      case 'F':
      case 'f':
        servoMotor.write(0);
        Serial.println("Forward");
        break;
      case 'B':
      case 'b':
        servoMotor.write(180);
        Serial.println("Backward");
        break;
    }
  }
}
