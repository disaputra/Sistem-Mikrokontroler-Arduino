char receivedData;
int inPin = 8;
void setup() {
  Serial.begin(9600);
  pinMode(inPin, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
      //read serial data
      receivedData = (char)Serial.read();
      
      Serial.print("received data is: ");

      //check for received command for action
      if(receivedData=='1'){
        digitalWrite(inPin, LOW);
        Serial.println(receivedData);
      }  
      else if(receivedData=='0'){
        digitalWrite(inPin, HIGH);
        Serial.println(receivedData);
      }
      else
        Serial.println(" invalid");
    }
}
