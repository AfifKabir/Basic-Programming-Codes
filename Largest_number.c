#include<stdio.h>
//find largest number
void main()
{
  int num1=175,num2=120,num3=121;
  if(num1>num2 && num1>num3){
    printf(" %d is largest.",num1);
  }
  else if(num2>num3){
    printf("%d is largest.",num2); 
  }
  else{
   printf("%d is largest.",num3);
  }
}
  