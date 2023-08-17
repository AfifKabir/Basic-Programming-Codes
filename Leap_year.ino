// C++ code
//Leap year
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int year=2020;
  if((year%400==0)||((year%4==0)&&(year%100!=0))){
    Serial.print(year);
    Serial.print(" is a leap year");
    Serial.println("");
  }
}