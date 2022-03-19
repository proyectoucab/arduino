const int s1 = 2;
const int s2 = 3;
char *incl[4] = {"Abajo","Derecha","Izquierda","Arriba"};
void setup() {
 pinMode(s1,INPUT);
 pinMode(s2,INPUT);
 Serial.begin(9600);
}


void loop() {
int p = (digitalRead(s1)<<1) | digitalRead(s2);
Serial.println(incl[p]);
delay(1000);
}
