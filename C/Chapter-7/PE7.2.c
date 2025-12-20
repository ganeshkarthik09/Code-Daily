#include <stdio.h>
int main()
{
    int n, dig = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        int san = n % 10;
        dig +=san;
        n /= 10;
    }
    printf("Sum of digits is %d ", dig);

    return 0;
}