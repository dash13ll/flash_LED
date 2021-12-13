int flashLedNow = 33;
void setup() {
  pinMode(flashLedNow, OUTPUT);
}

void loop() {
  digitalWrite(flashLedNow, HIGH);
  delay(500);
  digitalWrite(flashLedNow, LOW);
  delay(500);
}
