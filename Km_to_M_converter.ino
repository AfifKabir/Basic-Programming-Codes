// C++ code
//Km to M converter
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int km=15;
  int m=km*1000;
  Serial.println(m);
}