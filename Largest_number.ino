// C++ code
//find largest number
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
 
  int num1=175,num2=120,num3=121;
  if(num1>num2 && num1>num3){
    Serial.print(num1);
    Serial.print(" is largest.");
  }
  else if(num2>num3){
    Serial.print(num2);
    Serial.print(" is largest."); 
  }
  else{
    Serial.print(num3);
    Serial.print(" is largest.");
  }
  Serial.println(" ");
   
}