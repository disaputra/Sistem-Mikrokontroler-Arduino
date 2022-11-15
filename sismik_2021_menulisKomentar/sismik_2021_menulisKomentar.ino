
// program LED berkedip

const int pinLED = 8;

void setup() {
  pinMode(pinlLED, OUTPUT);
}

void loop() {
  /* program akan menyalakan dan mematikan LED
   * yang terhubung pada pin digital 8 mikrokontroler
   * Atmega328 selama 1 detik secara bergantian 
   */
  digitalWrite(pinLED, HIGH); // pinLED dalam kondisi high
  delay(1000); // delay 1000 ms atau 1 detik
  digitalWrite(pinLED, LOW); // pinLED dalam kondisi low
  delay(1000); // delay 1000 ms atau 1 detik

}
