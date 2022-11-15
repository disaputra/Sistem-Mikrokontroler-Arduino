// include the library code:
#include <LiquidCrystal.h> //library for LCD
 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
//Measuring Current Using ACS712
 
const int analogChannel = 0; //Connect current sensor with A0 of Arduino
int sensitivity = 185; // use 100 for 20A Module and 66 for 30A Module
float adcvalue= 0;
int offsetVoltage = 2500; 
double Voltage = 0; //voltage measuring
double Current = 0;// Current measuring
int pinRelay = 8;
 
void setup() {
 //baud rate
 Serial.begin(9600);//baud rate at which arduino communicates with Laptop/PC
 // set up the LCD's number of columns and rows:
 lcd.begin(16, 4); //LCD order
 // Print a message to the LCD.
 pinMode(pinRelay, HIGH);
}
 
void loop() //method to run the source code repeatedly
{
 unsigned int temp=0;
 float maxpoint = 0;
 int i=0;
 for(i=0;i<500;i++)
 {
 if(temp = analogRead(analogChannel),temp > maxpoint)
 {
 maxpoint = temp;
 }
 }
 adcvalue = maxpoint; 
 Voltage = (adcvalue / 1024.0) * 5000; // Gets you mV
 Current = ((Voltage - offsetVoltage) / sensitivity);
 Current = ( Current ) / ( sqrt(2) );
//Prints on the serial port
 Serial.print("Raw Value = " ); // prints on the serial monitor
 Serial.print(adcvalue); //prints the results on the serial monitor
 
 lcd.clear();//clears the display of LCD
 delay(1000);//delay of 1 sec
 lcd.display();
 lcd.setCursor(1,0);
 lcd.print("ADC = ");
 lcd.setCursor(8,0);
 lcd.print(adcvalue);
 
 Serial.print("\t mV = "); // shows the voltage measured 
 Serial.print(Voltage,3); // the '3' after voltage allows you to display 3 digits after decimal point
 
 lcd.setCursor(1,1);
 lcd.print("V = ");
 lcd.setCursor(8,1);
 lcd.print(Voltage,3);
 lcd.setCursor(14,1);
 lcd.print("mV");//Unit for the voltages to be measured
 
 Serial.print("\t Current = "); // shows the voltage measured 
 Serial.println(Current,3);// the '3' after voltage allows you to display 3 digits after decimal point
 
 lcd.setCursor(1,2);
 lcd.print("I = ");
 lcd.setCursor(8,2);
 lcd.print(Current,3);
 lcd.setCursor(15,2);
 lcd.print("A"); //unit for the current to be measured
 delay(1000); //delay of 2.5 sec
}
