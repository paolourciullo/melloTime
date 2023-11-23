const int btnPin = A0;  //button pin
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
}

void loop() {
  // read btnState
  btnState = digitalRead(btnPin);

  // if button is pressed:
  if (btnState == HIGH) {
    digitalWrite(solenoid01, HIGH);
    Serial.println("sol 1 is on    ");
    Serial.println(millis()/60);
    delay(1000);
    digitalWrite(solenoid02, HIGH);
    Serial.println("sol 2 is on");
    Serial.println(millis()/60);
    delay(29000);
    digitalWrite(solenoid01, LOW);
    Serial.println("sol 1 is off    ");
    Serial.println(millis()/60);
    digitalWrite(solenoid02, LOW);
    Serial.println("sol 2 is off    ");
    Serial.println(millis()/60);
    delay(30000);
  } else {
    digitalWrite(solenoid01, LOW);
    digitalWrite(solenoid02, LOW);
  }

}