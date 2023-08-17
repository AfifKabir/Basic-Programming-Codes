// C++ code
//Series of 5 fibonacci numbers
void setup()
{
  Serial.begin(9600);
  int fibo;
  Serial.println("Fibonacci numbers are:");
  for(int i=1;i<=5;i++){
    if(i<=2){
      fibo=i-1;
      Serial.print(fibo);
    }
    else{
      fibo=i-2;
      Serial.print(fibo);
    }
    Serial.println("");
  }
      
    
}

void loop()
{
 
}