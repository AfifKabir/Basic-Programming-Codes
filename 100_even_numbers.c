#include<stdio.h>
//100 even numbers
void main()
{
  int even=0;
  printf("Even numbers are:");
  for(int i=1;i<=100;i++){
    even+=2;
    printf("%d\n",even);
    }
}
