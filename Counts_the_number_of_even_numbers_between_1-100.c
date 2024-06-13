#include <stdio.h>
//Counts the number of even numbers between 1-100
void main()
{
  int even_count=0;
  for(int i=1;i<=100;i++){
    if(i%2==0){
      even_count++;
    }
  }
  printf("%f\n",even_count);
}

