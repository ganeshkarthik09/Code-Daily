#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int isprime = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            printf("%d ", i);
        }
        // printf("%d ", i);
    }

    return 0;
}