const int fil[4] = {3,8,7,5};
const int col[3] = {4,2,5};
const char car[4][3] = {{'1','2','3'},
{'4','5','6'},{'7','8','9'},{'*','0','#'}};


void setup() {
 Serial.begin(9600);
 for(int i=0;i<=3;i++)
    pinMode(fil[i], INPUT_PULLUP);
 for(int j=0;j<=2;j++){
    pinMode(col[j], OUTPUT);
    digitalWrite(col[j], HIGH);
 }
}

void loop() {
  for(int j=0;j<=2;j++){
    digitalWrite(col[j],LOW);
   for(int i=0;i<=3;i++)
     if(digitalRead(fil[i])==LOW)
          Serial.println(car[i][j]);
        digitalWrite(col[j], HIGH);
        delay(750);
}
}
