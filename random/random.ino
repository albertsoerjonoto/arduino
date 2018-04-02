void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int num1 = random(2);
  int num2 = random(2);

  if (num1 > num2){
    Serial.print(num1);
    Serial.print(" > ");
    Serial.println(num2);
  }
  else if (num1 == num2){
    Serial.print(num1);
    Serial.print(" = ");
    Serial.println(num2);
  }
  else{
    Serial.print(num1);
    Serial.print(" < ");
    Serial.println(num2);
  }
}
