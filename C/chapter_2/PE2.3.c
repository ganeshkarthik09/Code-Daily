// Printing the Table
#include <stdio.h>
int main()
{
    int i, k, mul;
    printf("Enter a number :");
    scanf("%d", &k);
    for (i = 1; i < 11; i++)
    {
        mul = i * k;
        printf("%d*%d=%d \n", k, i, mul);
    }
    return 0;
}