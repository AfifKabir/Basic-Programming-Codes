#include<stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial of %d:%d",n,factorial(n));

}