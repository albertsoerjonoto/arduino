int iteration = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,LOW);
/*  if (iteration % 3 == 0){
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
  iteration++;
  delay(100);

*/
}
