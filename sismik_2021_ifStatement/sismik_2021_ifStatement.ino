
// program LED berkedip

const int pinLED = 8; 
int timeDelay = 1000; // set waktu awal delay 1 detik

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  timeDelay = timeDelay - 100; // setiap loop berikurang 100

  if (timeDelay <= 0){
    timeDelay = 1000;
    }
  digitalWrite(pinLED, HIGH); // pinLED dalam kondisi high
  delay(timeDelay); // delay selama timeDelay
  digitalWrite(pinLED, LOW); // pinLED dalam kondisi low
  delay(timeDelay); // delay selama timeDelay
}
