#include <stdio.h>
int main()
{
    int k, l, m, sum;
    printf("Enter three numbers :");
    scanf("%d%d%d", &k, &l, &m);
    sum = k + l + m;
    printf("Sum of given numbers is :%d\n", sum);
    float avg = sum / 3.0;
    printf("Average of three numbers is : %f\n", avg);
    if (k > l && k > m)
    {
        printf("%d is the largest among three\n ", k);
    }
    else if (l > k && l > m)
    {
        printf("%d is the largest among three\n ", l);
    }
    else
    {
        printf("%d is the largest among three\n", m);
    }
    if (k < l && k < m)
    {
        printf("%d is the smallest among three\n ", k);
    }
    else if (l < k && l < m)
    {
        printf("%d is the smallest among three \n", l);
    }
    else
    {
        printf("%d is the smallest among three\n", m);
    }
    return 0;
}