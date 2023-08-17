// C++ code
//numbers divisible by 7 between 1-100
void setup()
{
  Serial.begin(9600);
  for(int i=1;i<=100;i++){
    if(i%7==0){
      Serial.println(i);
    }
  }
}


void loop()
{
  
}