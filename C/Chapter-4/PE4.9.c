#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter a number :");
    scanf("%d", &n);
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of the digit is : %d", sum);

    return 0;
}