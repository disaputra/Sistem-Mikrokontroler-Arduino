// program LED berkedip menggunakan while loop

const int pinLED = 8; 
int nilaiKondisi = 1000; // set nilai kondisi 1000

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // kondisi pertama
  while(nilaiKondisi > 0) {
    digitalWrite(pinLED, HIGH); // pinLED dalam kondisi high
    delay(500); // delay selama 500 ms
    digitalWrite(pinLED, LOW); // pinLED dalam kondisi low
    delay(500); // delay selama 500 ms

    nilaiKondisi = nilaiKondisi - 100; // mengurangi nilai kondisi
    }
  /* setelah nilai dikurangi terus menerus dan mencapai 
   * nilai lebih kecil dari nol maka program while 
   * tersebut berhenti
   */
  while(nilaiKondisi < 1000) {
    digitalWrite(pinLED, HIGH); // pinLED dalam kondisi high
    delay(500); // delay selama 500 ms
    digitalWrite(pinLED, LOW); // pinLED dalam kondisi low
    delay(500); // delay selama 500 ms

    nilaiKondisi = nilaiKondisi + 100; // menambah nilai
    }
}
