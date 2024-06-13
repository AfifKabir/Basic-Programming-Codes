#include<stdio.h>
//Series of 5 fibonacci numbers
void main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  int fibo;
  int fibo1=0,fibo2=1;
  printf("Fibonacci numbers are:\n");
  for(int i=1;i<=n;i++){
    if(i<=2){
      fibo=i-1;
      printf("%d\n",fibo);
    }
    fibo=fibo1+fibo2;
    printf("%d\n",fibo);
    fibo1=fibo2;
    fibo2=fibo;
  }
}