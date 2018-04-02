void setup() {
  // put your setup code here, to run once:
  pinmode(5, OUTPUT);
  pinmode(6, INPUT);
  pinmode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, LOW);
  digitalRead(6);
  analogWrite(9, map(3, 0, 5, 0, 255);

  int r = analogRead(A0);
  float p = r / 1023.0;
  float voltage = p* 0.5;

  map(r, 0, 1023, 0, 5);
}
