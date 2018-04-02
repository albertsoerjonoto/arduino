int loopCount = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  loopCount++;
  Serial.print("Number of loops: ");
  Serial.println(loopCount);

  Serial.print("Arduino has been running for ");
  Serial.print(millis());
  Serial.println(" ms");

  delay(500);
}
