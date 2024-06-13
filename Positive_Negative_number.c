#include<stdio.h>
//Positive-Negative Number
void main()
{
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  if(num>0){
    printf("%d is a positive number\n",num);
  }
  else if(num<0){
    printf("%d is a negative number\n",num);
  }
  else{
    printf("The number is zero\n");
  }
}