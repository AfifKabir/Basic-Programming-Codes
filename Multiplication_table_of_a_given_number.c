#include<stdio.h>
//Table of a given number
void main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  for(int i=1;i<=10;i++){
    printf("%d X %d = %d\n",n,i,n*i);
  }
}