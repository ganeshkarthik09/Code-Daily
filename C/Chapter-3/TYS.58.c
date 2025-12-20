#include <stdio.h>
int main()
{
    float c, v, a;
    printf("Enter the first number : ");
    scanf("%f", &c);
    printf("Enter the second number : ");
    scanf("%f", &v);
    a = c / v;
    printf("The result of %f/%f is : %f", c, v, a);

    return 0;
}