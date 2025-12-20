#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
           // printf("%d  ", i);
            sum += i;
        }
    }
            printf("%d  ", sum);

    return 0;
}