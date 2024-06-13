#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Armstrong numbers are:\n");
    for(int i=0;i<=n;i++){
        int temp1 = i; 
        int sum = 0;
        int temp2 = i;
        int dig_count = (int)log10(i) + 1; 
        while (temp1 != 0)
        {
            temp2 = temp1 % 10;           
            temp1 /= 10;                 
            sum += pow(temp2, dig_count); 
        }
        if(sum == i){
            printf("%d\n", i);
        }
    }
}
