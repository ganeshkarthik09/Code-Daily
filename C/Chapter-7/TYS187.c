#include <stdio.h>
int main()
{
    int n, i, j, k = 0, bin[45];
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i /= 2, k++)
    {
        bin[k] = i % 2;
        //  printf("%d", bin[k]);
    }
    // printf("\n");
    for (j = k - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    return 0;
}