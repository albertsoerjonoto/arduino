void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flame = 500;

/*
  int count = 0;
  while (count<6)
  {
    Serial.println(count);
    count++;
  }
*/  
  
  for (int i =0;i<6;i++){
    Serial.println(i);
  }
  
  Serial.println("Done");
}
