// C++ code
//Multiplication of a given number
void setup()
{
  Serial.begin(9600);
  int n =5;
  for(int i=1;i<=10;i++){
     Serial.print(n);
     Serial.print(" X ");
     Serial.print(i);
     Serial.print(" = ");
     Serial.print(n*i);
     Serial.println("");
  }
    
    
  
}

void loop()
{
  
}