#include<stdio.h>
//Sum of the first 100 natural numbers
void main()
{
  int sum=0;
  for(int i=1;i<=100;i++){
    sum+=i;
  }
  printf("%d\n",sum);
}
