#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the digit :\n");
    scanf("%d", &n);
    while (n / 10)
    {
        for (i = 1; n / i; i *= 10)

            ;
        i /= 10;
        n = n % i;
        printf(" %d\n", n % i);
        printf(" ");
    }

    return 0;
}