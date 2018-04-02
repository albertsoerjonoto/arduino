int signal;
int ledpin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  signal = analogRead(1);
  Serial.println(signal);
  
  if (signal>=700) //if something is on top of the LDR
    digitalWrite(ledpin, HIGH); //the LED will be ON
  else
    digitalWrite(ledpin, LOW);
}
