#include <stdio.h>
int main()
{
    int n;
    int i = 1, n1 = 1, n2 = 1, n3;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d  %d  ", n1, n2);
    do
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        i++;
    } while (i <= n);

    return 0;
}