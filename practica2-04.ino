const int number[10][7]={{1,1,10,1,1,1},
{0,0,10,0,1,0},{1,0,1,1,1,0,1},
{1,01,1,0,1,1},{0,1,1,1,0,1,0},
{1,1,0,1,0,1,1},{1,1,0,1,1,1,1},
{1,0,1,0,0,1,0},{1,1,1,1,1,1},
{1,1,1,1,0,1,0}};

void setup(){
  for(int i=2;i<=8;i++)
  pinMode(i, OUTPUT);
  }

  void loop(){
    for(int n=0; n<=9;n++)
    display(n);
    }

    void(display(int n)){
        for(int i=0; i<=6;i++)
        digitalWrite(i+2,number[n][i]);
        delay(500);
      }
