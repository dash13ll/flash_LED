int flashLed = 33;
void setup() {
  pinMode(flashLed, OUTPUT);
}

void loop() {
  digitalWrite(flashLed, HIGH);
  delay(100);
  digitalWrite(flashLed, LOW);
  delay(100);
}
