// C++ code
//Largest between two numbers
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    int number1=10;
    int number2=15;
    if(number1>number2){
      Serial.print(number1);
      Serial.print(" is largest");
    }
    else{
      Serial.print(number2);
      Serial.print(" is largest");
    }
    Serial.println("");
    delay(5000);
    
    
    
  }
  
}