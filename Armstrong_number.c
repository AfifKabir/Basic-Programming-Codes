#include <stdio.h>
#include <math.h>
int main()
{
    int n; // 153

    printf("Enter the number:");
    scanf("%d", &n);
    int temp1 = n; // 153
    int sum = 0;
    int temp2 = n;
    int dig_count = (int)log10(n) + 1; // 3
    while (temp1 != 0)
    {
        temp2 = temp1 % 10;           // 3,5,1
        temp1 /= 10;                  // 15,1,0
        sum += pow(temp2, dig_count); // 27+125+1=153
    }
    (sum == n) ? printf("%d is an armstrong number\n", n) : printf("%d is not an armstrong number\n", n);
}
