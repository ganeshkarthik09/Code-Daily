#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the number of which you want the table of :");
    scanf("%d",&n);
    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
   /*do
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 9);*/

    return 0;
}