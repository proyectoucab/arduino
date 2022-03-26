const int number[10][7] = {{1,1,1,0,1,1,1},
                          {0,0,1,0,0,1,0}, {1,0,1,1,1,0,1},
                          {1,0,1,1,0,1,1}, {0,1,1,1,0,1,0},
                          {1,1,0,1,0,1,1}, {1,1,0,1,1,1,1},
                          {1,0,1,0,0,1,0}, {1,1,1,1,1,1,1},
                          {1,1,1,1,0,1,0}};
long tiempo;
const int triger = 10;
const int echo = 11;
float dist;

int count = 0;

void setup() {
  pinMode(triger, OUTPUT);
  pinMode(echo, INPUT);
  for(int i=2;i<=8;i++) pinMode(i, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(triger, HIGH);
  delayMicroseconds(10);
  digitalWrite(triger, LOW);
  tiempo = (pulseIn(echo, HIGH) / 2);
  dist = float(tiempo * 0.0343);
  Serial.println(dist);

  if(count == 10) count = 0;

  if(dist < 20){
    delay(50);
    if(dist < 20) count++; 
  }
  display(count);

}

void display (int n){
  for(int i=0;i<=6;i++)
    digitalWrite(i+2,number[n][i]);
  delay (100);
}
