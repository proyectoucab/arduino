const int LM35=A0;

 // LM35 - Sensor de temperatura
void setup() {
 Serial.begin(9600);

}

void loop() {
   int val = analogRead(LM35);
   float celsius = ((float)val*5000.0/1024.0)/10.0;
   Serial.print(celsius);
   Serial.println("C");
   delay(1000);

}
