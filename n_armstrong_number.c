#include <stdio.h>
#include <math.h>
//Print n armstrong  numbers
int main()
{
    int n;
    int arm=0;
    int i=1;
    printf("Enter N to print N armstrong numbers:");
    scanf("%d", &n);
    printf("Armstrong numbers are:\n");
    while(i<=n)
    {
            int temp1 = arm;
            int sum = 0;
            int temp2 = arm;
            int dig_count = (int)log10(arm) + 1;
            while (temp1 != 0)
            {
                temp2 = temp1 % 10;
                temp1 /= 10;
                sum += pow(temp2, dig_count);
            }
            if (sum == arm)
            {
                i++;
                printf("%d\n", arm);
            }
            arm++;
        }
}

