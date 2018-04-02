void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flame = 600;

/*
  while (flame < 200 || flame > 500){
    Serial.println(flame);
  }
*/

  bool isFlame = flame <600;

  if (isFlame || wait(100000)){ //try with &&
    Serial.println("Sooooo long"); 
  }
  
  while (!isFlame){
    Serial.println(flame);
  }
  Serial.println("Done");
}

bool wait(int ms){
  delay(ms);
  return true;
}

