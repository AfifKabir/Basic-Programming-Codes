// C++ code
//Nested while loop
void setup()
{
  Serial.begin(9600);
  while(1){
    if(Serial.read()=='s'){
      while(1){
        Serial.println("HELLO WORLD");
        if(Serial.read()=='b'){
          break;
        }
      }
      Serial.println("Loop broken");
    }
  }
}


void loop()
{
  
}