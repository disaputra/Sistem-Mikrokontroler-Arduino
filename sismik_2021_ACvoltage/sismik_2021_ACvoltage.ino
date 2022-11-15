#include <LiquidCrystal.h>  // initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensorIn = A1;
double voltage = 0;
double VRMS = 0;
int i;

void setup(){ 
 Serial.begin(9600);
 lcd.begin(16,2); // set up the LCD’s number of columns and rows:
}

void loop(){
  
  VRMS = voltageRead();
  lcd.setCursor(0,0); 
  lcd.print("V=");
  lcd.print(VRMS);
  lcd.print("V");
  Serial.print("V = ");
  Serial.print(VRMS);
  Serial.println("V");
  delay(1000);
}


 float voltageRead(void)
 {
 float max;
 int i;
 unsigned int temp = 0;
 float maxPoint = 0;
 for(i=0;i<500;i++)
      {
         if(temp =analogRead(sensorIn),temp > maxPoint)
         {
            maxPoint = temp;
         }
      }
  maxPoint = maxPoint *(10.0/1023.0);
  maxPoint = (maxPoint -5.0);
  maxPoint = maxPoint *111;
//  Serial.println(maxPoint);
  max = maxPoint *.707106781;
  return max;
 }
