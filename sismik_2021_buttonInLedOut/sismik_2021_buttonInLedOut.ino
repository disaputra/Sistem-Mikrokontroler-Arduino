// kontrol Led dengan button

const int pinLed = 13;
const int pinButton = 2;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT);
}

void loop() {
  if (digitalRead(pinButton)== LOW){
    digitalWrite(pinLed, LOW);
    }
    else{
      digitalWrite(pinLed, HIGH);
      }
}
