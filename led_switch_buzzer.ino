/*
 either lights an LED or buzz a buzzer, depending on whether a switch is pressed or not.
 */
`
// assign names to digital IO pins.
const int LED = 13; // orange wire
const int buzzer = 12; // yellow wire
const int button = 11; // blue wire
boolean buttonState = LOW;

void setup() {
// put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
// we assume that the button is not pressed, so buttonState should be LOW.
buttonState = LOW;
// if the button is pressed, -5V will be sensed at the pin named
// "button" and interpreted as HIGH, so we will set the
// variable "buttonState" to HIGH
buttonState = digitalRead(button);

if (buttonState == HIGH) {
  // turn buttzer on and LED off.
  digitalWrite(buzzer, HIGH);
  digitalWrite(LED, LOW);
}
else {
  // turn buzzer off and LED on.
  digitalWrite(buzzer, LOW);
  digitalWrite(LED, HIGH);
}
}
