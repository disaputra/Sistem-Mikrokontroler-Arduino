// program debounce
// UC Project
// 2021

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int pinRelay = 8;             // The LED is connected to pin 9
const int pinButton = 6;          // The Button is connected to pin 2
boolean lastButton = LOW;    // Variable containing the previous button state
boolean currentButton = LOW; // Variable containing the current button state
boolean ledOn = false;       // The present state of the LED (on/off)

void setup()
{
  lcd.begin(16,2);
  pinMode (pinRelay, OUTPUT);     // Set the LED pin as an output
  pinMode (pinButton, INPUT);   // Set button as input (not required)
}

/*
* Debouncing Function
* Pass it the previous button state,
* and get back the current debounced button state.
*/
boolean debounce(boolean last)
{
  boolean current = digitalRead(pinButton);       // Read the button state
  if (last != current)                         // If it's different…
  {
    delay(5);                                  // Wait 5ms
    current = digitalRead(pinButton);             // Read it again
  }
  return current;                              // Return the current value
}

void loop()
{
  currentButton = debounce(lastButton);              // Read debounced state
  if (lastButton == LOW && currentButton == HIGH)    // If it was pressed…
  {
    ledOn = !ledOn;                                  // Toggle the LED value
  }
  lastButton = currentButton;                        // Reset button value
  
  digitalWrite(pinRelay, ledOn);                          // Change the LED state
  
//  if(ledOn == false){
//    lcd.clear();
//    lcd.setCursor(0, 0);   
//    lcd.print("Lampu :  "); 
//    lcd.setCursor(9, 0);
//    lcd.write("ON");
//    //lcd.clear();
//    //delay(100);
//    }
//    else{
//      //lcd.clear();
//      lcd.setCursor(0, 0);   
//      lcd.print("Lampu :  "); 
//      lcd.setCursor(9, 0);
//      lcd.write("OFF");
//      //lcd.clear();
//      //delay(100);
//      }
      
      lcd.setCursor(0, 0);   
      lcd.print("Lampu :  "); 
      lcd.setCursor(9, 0);
      lcd.print(!ledOn);

}
