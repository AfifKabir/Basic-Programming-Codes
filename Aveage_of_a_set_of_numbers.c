#include <stdio.h>
//Aveage of a set of numbers
int main()
{
  int sum=0;
  float avg;
  for(int i=11;i<=15;i++){
   sum+=i;
  }
  avg=(float)sum/5;
  printf("Average= %f",avg);
  return 0;
}