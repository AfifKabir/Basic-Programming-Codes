#include <stdio.h>
//Factorial of a given number
void main()
{
  int fact=1;
  for(int i=7;i>=1;i--){
    fact*=i;
  }
  printf("%d\n",fact);
}