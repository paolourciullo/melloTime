
#include <Wire.h>
#include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2);



const int btnPin = 2;  //button pin
const int solenoid01 = 10;
const int solenoid02 = 11;

int btnState = 0;  //  button hi/lo


// the setup function runs once when you press reset or power the board
void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(solenoid01, OUTPUT);
  pinMode(solenoid02, OUTPUT);
  pinMode(btnPin, INPUT);
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
}

void loop() {
    digitalWrite(solenoid01, HIGH);
    Serial.println("sol 1 is on    ");
    Serial.println(millis()/60);
    lcd.setCursor(0, 0);
    lcd.print("sol1 is on");
    delay(1000);
    digitalWrite(solenoid02, HIGH);
    Serial.println("sol 2 is on    ");
    Serial.println(millis()/60);
    lcd.setCursor(0, 0);
    lcd.print("sol2 is on    ");
    delay(29000);
    digitalWrite(solenoid01, LOW);
    Serial.println("sol 1 is off    ");
    Serial.println(millis()/60);
    lcd.setCursor(0, 0);
    lcd.print("sol1 is off");
    digitalWrite(solenoid02, LOW);
    Serial.println("sol 2 is off    ");
    Serial.println(millis()/60);
    lcd.setCursor(0, 0);
    lcd.print("sol2 is off");
    delay(30000);


}
