// include the library code:
#include <LiquidCrystal.h>
#define LEDG 9
#define BUTTONG 10
#define LEDB 7
#define BUTTONB 8
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
bool lightG = false;
bool lightB = false;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.clear();
  // Print a message to the LCD.
  lcd.print("Welcome!");
  delay(2000);
}
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.setCursor(0,0);
  lcd.print("Press button");
  if(digitalRead(BUTTONG) == LOW){
    if(lightG == false){
      digitalWrite(LEDG, HIGH);
      lightG = true;
      lcd.setCursor(0,1);
      lcd.print("Light G ON ");
    } else {
      digitalWrite(LEDG, LOW);
      lightG = false;
      lcd.setCursor(0,1);
      lcd.print("Light G OFF");
    }
    delay(400);
  }
  if(digitalRead(BUTTONB) == LOW){
    if(lightB == false){
      digitalWrite(LEDB, HIGH);
      lightB = true;
      lcd.setCursor(0,1);
      lcd.print("Light B ON ");
    } else {
      digitalWrite(LEDB, LOW);
      lightB = false;
      lcd.setCursor(0,1);
      lcd.print("Light B OFF");
    }
    delay(400);
  }
}
