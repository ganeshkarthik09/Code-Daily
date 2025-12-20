#include <stdio.h>
int main()
{
    int count = 0, sum = 0;
    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d \n", i);
            count += 1;
            sum += i;
        }
    }
    printf("Number of integers divisible by 7 between 100 and 200 are %d\n", count);
    printf("Sum of these integers is %d", sum);

    return 0;
}