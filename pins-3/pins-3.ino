void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  tone(6, 988,500);
  tone(6, 880,500);
  tone(6, 784,500);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
