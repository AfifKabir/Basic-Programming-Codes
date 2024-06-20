#include<stdio.h>
int primeChecker(int n);
int main(){
    int n1,n2;
    printf("Enter the N1 & N2 for interval:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    printf("Prime Numbers are:\n");
    for(int i=n1;i<=n2;++i){
        int flag=primeChecker(i);
        if(flag==1){
            printf("%d\n",i);
        }
    }
    return 0;
}
int primeChecker(int n){
    int key=1;
    for(int j=2;j<=n/2;++j){
        if(n%j==0){
            key=0;
            break;
            }
    }
    return key;
}