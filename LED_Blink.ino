
/*
  Project: Arduino LED Blinking
  Purpose: Blink the built-in LED every second.
  Board: Arduino Uno (or compatible board)
*/

const int LED_PIN = LED_BUILTIN;
const unsigned long BLINK_INTERVAL = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_INTERVAL);

  digitalWrite(LED_PIN, LOW);
  delay(BLINK_INTERVAL);
}
