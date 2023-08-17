// C++ code
//Aveage of a set of numbers
void setup()
{
 Serial.begin(9600);
  int sum=0;
  float avg;
  for(int i=11;i<=15;i++){
   sum+=i;
  }
  avg=sum/5;
  Serial.print("Average=");
  Serial.print(avg);
}

void loop()
{
 
}