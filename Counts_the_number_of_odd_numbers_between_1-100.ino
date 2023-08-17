// C++ code
//Counts the number of odd numbers between 1-100
void setup()
{
  Serial.begin(9600);
  int odd_count=0;
  for(int i=1;i<=100;i++){
    if(i%2!=0){
      odd_count++;
    }
  }
  Serial.print(odd_count);
    
  
}

void loop()
{
 
}