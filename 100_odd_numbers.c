#include <stdio.h>
//100 odd numbers
void main()
{
  int odd=1;
  printf("Odd numbers are:");
  for(int i=1;i<=100;i++){
    printf("%d\n",odd);
    odd+=2;
    }
}