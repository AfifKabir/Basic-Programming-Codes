// C++ code
//Sum of the first 100 natural numbers
void setup()
{
  Serial.begin(9600);
  int sum=0;
  for(int i=1;i<=100;i++){
    sum+=i;
    }
  Serial.print(sum);
}

void loop()
{
 
}
