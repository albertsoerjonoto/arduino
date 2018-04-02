int iteration = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (iteration % 2 == 0){
    Serial.println("Even");
  }
  else {
    Serial.println("Odd");
  }

  iteration++;
  
}
