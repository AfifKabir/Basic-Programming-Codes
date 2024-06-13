#include <stdio.h>
//Even numbers between 1-100 using while loop
void main()
{
  int i=1;
  while(i<=100){
    if(i%2==0){
      printf("%d\n",i);
    }
    i++;
  }
}