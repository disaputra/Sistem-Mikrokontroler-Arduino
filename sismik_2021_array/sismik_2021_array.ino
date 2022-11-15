// penggunaan array
const int numLed = 4;
const int pinLed[numLed] = {8,9,10,11};

void setup() {
  for(int i=0; i<4; i++){
    pinMode(pinLed[i], OUTPUT); // inisialisasi semua pin sbg output
    }
}

void loop() {
  for(int i=0; i<4; i++){
    digitalWrite(pinLed[i], LOW);
  }
  delay(1000); // elay 1000 ms
  for(int i=0; i<4; i++){
    digitalWrite(pinLed[i], HIGH);
  }
  delay(1000);
}
