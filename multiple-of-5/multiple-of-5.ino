int multipleof5 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("This is my second sketch:");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(multipleof5);
  multipleof5 = multipleof5 + 5;
}
