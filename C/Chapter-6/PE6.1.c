#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("NUMBER IS EVEN \n");
    }
    else
    {
        printf("NUMBER IS ODD");
    }

    return 0;
}