// C++ code
//Positive-Negative Number
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int num=4;
  if(num>0){
    Serial.print(num);
    Serial.print(" is a positive number");
  }
  else if(num<0){
    Serial.print(num);
    Serial.print(" is a negative number");
  }
  Serial.println("");
}