const int ENA = 8;
const int IN1 = 9;
const int IN2 = 10;



void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(ENA, LOW);


}

void loop() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, HIGH);
  delay(5000);
  // MOtor no gira
  digitalWrite(ENA, LOW);
  delay(1000);
  // motor gira en sentido inverso
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  
  digitalWrite(ENA, HIGH);
  delay(5000);
  
  digitalWrite(ENA,LOW);
  delay(1000);
  }
