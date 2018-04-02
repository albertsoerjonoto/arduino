int int1 = 3;
int int2 = 5;

float float1 = 3.0;
float float2 = 5.0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  int a = 7;
  
  printOutDivisions();
  int b = multiplyBy6(a);
  Serial.println(multiplyBy(5,6));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");
  delay(500); //stop for 500ms or 0.5s
  millis();
}

//use functions for reuseability

int multiplyBy6(int input){
  return input*6;
}

int multiplyBy(int input1, int input2){
  return input1*input2;
}

void printOutDivisions(){
  Serial.begin(9600);
  
  Serial.print("int2 / int1 = ");
  Serial.println(int2 / int1);

  Serial.print("float2 / int1 = ");
  Serial.println(float2 / int1); //promotes from integer to float, float is bigger than integer

  Serial.print("float2 / float1 = ");
  Serial.println(float2 / float1);
}

