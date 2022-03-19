
long tiempo;
int triger = 7;
int echo = 8;
float dist;


void setup() {
pinMode(triger, OUTPUT);
pinMode(echo, INPUT);

Serial.begin(9600);

}

void loop() {

  digitalWrite(triger, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(triger, LOW);
  tiempo=(pulseIn(echo,HIGH)/2);
  dist = float(tiempo * 0.0343);
  Serial.println(dist);
  delay(1000);

}
