#include <stdio.h>
int main()
{
    int i=0, j=0, n; // i,j are for positive,negative  count respectively
    printf("Start entering the numbers :\n");
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else if (n > 0)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
        printf("Number of positive numbers and negative numbers are %d,%d Respectively ", i, j);

    return 0;
}