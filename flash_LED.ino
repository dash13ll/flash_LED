int flashLedNow = 33;
int flashMob = 34;
void setup() {
  pinMode(flashLedNow, OUTPUT);
  pinMode(flashMob, OUTPUT);
}

void loop() {
  digitalWrite(flashLedNow, HIGH);
  digitalWrite(flashMob, LOW);
  delay(300);
  digitalWrite(flashLedNo, LOW);
  digitalWrite(flashMob, HIGH);
  delay(300);
}
