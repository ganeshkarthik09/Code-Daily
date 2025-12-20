#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, i = 2;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (count <= n)
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
            count = count + 1;
        }
        i++;
    }

    return 0;
}