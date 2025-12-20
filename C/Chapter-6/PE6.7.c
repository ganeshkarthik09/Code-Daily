#include <stdio.h>
int main()
{
    int flo, i = 1, num = 1;
    printf("Enter the number of rows in floyds triangle :");
    scanf("%d", &flo);
    while (i <= flo)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d \t", num);
            num++;
        }
        printf("\n");

        i++;
    }

    return 0;
}