#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}
int main(){
 int n;
 printf("Enter the number:");
 scanf("%d",&n);
 int s=sum(n);
 printf("Sum:%d\n",s);
}