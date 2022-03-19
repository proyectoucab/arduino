// BUZER

const int buz = 2;

void setup() {
  pinMode(buz, OUTPUT);
}


void loop() {
  int f = 50;
  while(true){
    tone(buz, f);
    delay(250);
    f += 50;
    if(f == 1000)
      f = 50;
  }
  
  /*
  for(int f=50;f<=250;f+=50){
    tone(buz,f);
    delay(500);
  }

  */
}
