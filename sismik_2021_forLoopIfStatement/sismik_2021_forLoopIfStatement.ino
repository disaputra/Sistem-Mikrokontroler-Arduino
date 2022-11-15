// program LED berkedip 10 dengan foor loop

const int pinLed1 = 8; 
const int pinLed2 = 9;
const int pinLed3 = 10; 
const int pinLed4 = 11;  

void setup() {
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
}

void loop() {

  for (int i=1; i<10; i++) {
    if(i==1){
      digitalWrite(pinLed1, HIGH);
      digitalWrite(pinLed2, LOW);
      digitalWrite(pinLed3, LOW);
      digitalWrite(pinLed4, LOW);
    }
    else if(i==2){
      digitalWrite(pinLed1, HIGH);
      digitalWrite(pinLed2, HIGH);
      digitalWrite(pinLed3, LOW);
      digitalWrite(pinLed4, LOW);      
      }
    else if(i==3) {
      digitalWrite(pinLed1, HIGH);
      digitalWrite(pinLed2, HIGH);
      digitalWrite(pinLed3, HIGH);
      digitalWrite(pinLed4, LOW);
      }
    else if(i==4){
      digitalWrite(pinLed1, HIGH);
      digitalWrite(pinLed2, HIGH);
      digitalWrite(pinLed3, HIGH);
      digitalWrite(pinLed4, HIGH); 
      }
    else{
      digitalWrite(pinLed1, LOW);
      digitalWrite(pinLed2, LOW);
      digitalWrite(pinLed3, LOW);
      digitalWrite(pinLed4, LOW);       
      }
    delay(5000);
   }
}
