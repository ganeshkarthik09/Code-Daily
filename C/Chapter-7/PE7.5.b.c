#include <stdio.h>
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    for (int i = n; i >=1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}