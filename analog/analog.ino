int pin = A0;

unsigned long duration;



void setup()

{
  Serial.begin(9600);
  pinMode(pin, INPUT);

}



void loop()

{
  duration = analogRead(A0);
  Serial.println(duration);
}
