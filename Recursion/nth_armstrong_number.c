#include<stdio.h>
int armstrong(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return armstrong(n-1)+armstrong(n-2);
}
int main(){
    int n;
    printf("Enter the nth number:");
    scanf("%d",&n);
    printf("Print %dth armstrong number:%d\n",n,armstrong(n));
}