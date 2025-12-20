// Table of a given number 24-12-2023
#include <stdio.h>
int main()
{
    int i, j = 1, result;
    printf("Enter the number of which you want the table: \n");
    scanf("%d", &i);
    while (j <= 10)
    {
        result = i * j;
        printf("%d*%d=%d\n", i, j, result);
        j = j + 1;
    }
    return 0;
}