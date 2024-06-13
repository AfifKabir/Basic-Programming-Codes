#include<stdio.h>
//numbers divisible by given number between 1-100
void main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("NUmbers divisible by %d:\n",n);
  for(int i=1;i<=100;i++){
    if(i%n==0){
      printf("%d\n",i);
    }
  }
}