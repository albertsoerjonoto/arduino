int int1 = 3;
int int2 = 5;

float float1 = 3.0;
float float2 = 5.0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.print("int2 / int1 = ");
  Serial.println(int2 / int1);

  Serial.print("float2 / int1 = ");
  Serial.println(float2 / int1);

  Serial.print("float2 / float1 = ");
  Serial.println(float2 / float1);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(multipleof5);
  multipleof5 = multipleof5 + 5;
}
