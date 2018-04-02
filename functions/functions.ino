void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(absVal(3)); //3
  Serial.println(absVal(0)); //0
  Serial.println(absVal(-7)); //7
  Serial.println(absVal(3.14)); //3.14
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

double distance(double currX, double currY, double destX, double destY){
  double x = destX - currX;
  double y = destY - currY;
  sqrt(x * x + y * y)
}

double angle(double currX, currY, currAngle, double destX, double destY){
  double angleFromZero = atan((destY - currY)/(destX - currX));
  return angleFromZero + currAngle;
}

double angle(double currAngle, double destAngle){
  return destAngle - currAngle;
}

bool directionToTurn(double angle){
  if (absVal(angle) < PI){
    return angle < 0;
  }else{.
    return !(angle < 0);
}


int absVal(int x){
  if (x >= 0){
    return x;
  }else{
    return -x;
  }
}

double absVal(double x){
  if (x >= 0){
    return x;
  }else{
    return -x;
  }
}


// built-in functions
