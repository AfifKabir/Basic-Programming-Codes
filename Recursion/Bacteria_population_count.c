#include<stdio.h>
int bacteriaCount(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else if(n==3){
        return 2;
    }
    int a=bacteriaCount(n-1);
    int b=bacteriaCount(n-2);
    int c=bacteriaCount(n-3);
    int d=a-b;
    int e=b-c;
    return d+(2*e)+(3*c);

}
int main(){
    int n;
    printf("Enter the number of day:");
    scanf("%d",&n);
    int p=bacteriaCount(n);
    printf("Total Population=%d\n",p);
}