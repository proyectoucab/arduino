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
float lastDist;

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
  dist = tiempo * 0.0343;
  Serial.println(dist);

  if(count == 10) count = 0;
  
 if(dist != lastDist && dist < 100 && dist < lastDist - 5) count++;
 
  lastDist = dist;

 display(count);

}

void display (int n){
  for(int i=0;i<=6;i++)
    digitalWrite(i+2,number[n][i]);
  delay (1000);
}
