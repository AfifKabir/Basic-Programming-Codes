// C++ code
//Counts the number of even numbers between 1-100
void setup()
{
  Serial.begin(9600);
  int even_count=0;
  for(int i=1;i<=100;i++){
    if(i%2==0){
      even_count++;
    }
  }
  Serial.print(even_count);
    
  
}

void loop()
{
 
}