// C++ code
//Feet to Inch converter
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int feet=10;
  int inch=feet*12;
  Serial.println(inch);
}