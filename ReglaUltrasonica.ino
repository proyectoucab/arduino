#include <SoftwareSerial.h>

long tiempo;
int trigger = 7;
int echo = 8;
float dist;
boolean flag=true;

int boton=5;



SoftwareSerial mySerial(3,2);

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(boton, INPUT_PULLUP);
  

  mySerial.begin(9600);
  delay(500);
   
}

void loop() {
  int valorPulsador;

  valorPulsador = digitalRead(5);
  if(valorPulsador == LOW){
    flag=!flag;
    }
    
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  tiempo = (pulseIn(echo, HIGH)/2);
  dist = float(tiempo*0.0343);
  delay(1000);

  if(flag==false){
    
    //centimetros
     mySerial.write(254);
  mySerial.write(128);
  mySerial.print(dist);
  mySerial.print(" cm--------");
  delay (1500);
    }else{
  mySerial.write(254);
  mySerial.write(128);
  mySerial.print(dist/2.34);
  mySerial.print(" In--------");
  delay (1500);
      }
  
 
}
