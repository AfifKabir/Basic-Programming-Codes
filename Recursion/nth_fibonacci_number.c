#include<stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("Enter the nth number:");
    scanf("%d",&n);
    printf("Print %dth fibonacci number:%d\n",n,fibo(n));
}