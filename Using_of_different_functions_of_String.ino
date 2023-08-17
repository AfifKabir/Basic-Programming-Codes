// C++ code
//Using of different functions of String 
void setup()
{
  Serial.begin(9600);
  String s="Hello World!";
  int len=s.length();//measurement of character.
  Serial.println(len);//space,! are also characters.
  char character=s.charAt(0);//specify specific character;
  Serial.println(character);
  String substring=s.substring(0,5);//specify specific part of string
  Serial.println(substring);
  String num1="5",num2="10";
  int intnum1=num1.toInt();//type casting
  int intnum2=num2.toInt();
  Serial.println(intnum1+intnum2);
  s.toUpperCase();//convert to big alphabet
  Serial.println(s);
  s.toLowerCase();//convert to small alphabet
  Serial.println(s);
  
    
 
}

void loop()
{
 
}