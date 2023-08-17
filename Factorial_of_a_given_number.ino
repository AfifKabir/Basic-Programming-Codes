// C++ code
//Factorial of a given number
void setup()
{
  Serial.begin(9600);
  int multiplication=1;
  for(int i=7;i>=1;i--){
    multiplication*=i;
  }
  Serial.println(multiplication);
}

void loop()
{
 
}