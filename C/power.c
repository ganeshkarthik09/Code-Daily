// a raised to the power of b 22-12-2023
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter the base a :\n");
    scanf("%d", &a);
    printf("Enter the power b:\n");
    scanf("%d", &b);
    // power=pow(a,b);
    printf("a raised to the power b is : %.3f ",pow(a, b));
    return 0;
}