// C++ code
//Odd number between 1-100
void setup()
{
  Serial.begin(9600);
  for(int i=1;i<=100;i+=2){
    Serial.println(i);
  }
}

void loop()
{
 
}