// C++ code
//Inch to Feet converter
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int inch=120;
  int feet=inch/12;
  Serial.println(feet);
}