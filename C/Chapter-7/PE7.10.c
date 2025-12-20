#include <stdio.h>
int fact(int g)
{
    int rial = 1;
   // scanf("%d", &k);
    for (int i = 1; i <= g; i++)
    {
        rial *= i;
    }
    //printf("%d ", rial);
    return rial;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    float e, te, sum = 0;
    // fact();
    for (int i = 1; i <=n; i++)
    {
        te = 1.0 / fact(i);
        sum += te;
    }
    e = 1 + sum;
    printf("%f ", e);

    return 0;
}

