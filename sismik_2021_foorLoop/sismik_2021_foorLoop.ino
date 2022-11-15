// program LED berkedip 10 dengan foor loop

const int pinLED = 8; 

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {

  for (int i=1; i<10; i++) {
  digitalWrite(pinLED, HIGH); // pinLED dalam kondisi high
  delay(500); // delay selama 500 ms
  digitalWrite(pinLED, LOW); // pinLED dalam kondisi low
  delay(500); // delay selama 500 ms
  }
  delay (2000); 
}
