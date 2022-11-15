// debounce handle

const int pinLed = 9;
const int pinButton = 2;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean nyalaLed = false;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT);
}

void loop() {
  currentButton = debounce(lastButton);
  if (lastButton == LOW && currentButton == HIGH){
    nyalaLed = !nyalaLed;
    }
  lastButton = currentButton;
  digitalWrite(pinLed, nyalaLed);
}

boolean debounce(boolean last){
  boolean current = digitalRead(pinButton);
  if(last != current){
    delay(5);
    current = digitalRead(pinButton);
    }
  return current;
  }
