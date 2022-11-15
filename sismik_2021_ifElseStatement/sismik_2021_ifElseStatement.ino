// program LED berkedip
const int pinLED = 8; 
int timeDelay = 1000; // set waktu awal delay 1 detik

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  
  if (timeDelay <= 100){
    delay(2000); 
    timeDelay = 1000;
    }
    else {
      timeDelay = timeDelay - 100; 
      }
      
  digitalWrite(pinLED, HIGH); // pinLED dalam kondisi high
  delay(timeDelay); // delay selama timeDelay
  digitalWrite(pinLED, LOW); // pinLED dalam kondisi low
  delay(timeDelay); // delay selama timeDelay
}
