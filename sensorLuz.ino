const int sensor = 2;


void setup() {
  Serial.begin(9600);
}


void loop() {
  Serial.println(digitalRead(sensor));
  delay(1000);
}
