const int relay=12;
const int led=11;

void setup(){
 
Serial.begin(9600);
pinMode(relay,OUTPUT);
pinMode(led,OUTPUT);

}

void loop() {

char comando;

if(Serial.available()>0){
  comando = Serial.read();
    switch(comando){
      case '1':
         digitalWrite(relay,HIGH);
        break;
      case '2':
         digitalWrite(relay,LOW);
        break;

        case '3':
         digitalWrite(led,HIGH);
        break;
      case '4':
         digitalWrite(led,LOW);
        break;
        
      }

      
      

    
      
    }
  }
