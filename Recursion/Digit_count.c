#include<stdio.h>
int dig_count(int n){//32431,3243,324,32,3,0
    if(n==0){
        return 0;
    }
    return dig_count(n/10)+1;//3243,324,32,3,0
}
int main(){
    int n;
    printf("Enter ther number:");
    scanf("%d",&n);
    int digit=dig_count(n);
    printf("Digit No.:%d\n",digit);
}