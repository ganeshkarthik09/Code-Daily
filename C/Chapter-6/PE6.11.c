#include <stdio.h>
int main()
{
    int l, m, n;
    printf("Enter three integers :");
    scanf("%d%d%d", &l, &m, &n);
    if (l * l + m * m == n * n || m * m + n * n == l * l || n * n + l * l == m * m)
    {
        printf("Can form a right angled triangle ");
    }
    else
    {
        printf("Can't form a right angled triangle ");
    }

    return 0;
}