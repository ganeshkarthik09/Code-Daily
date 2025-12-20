//Average of three numbers 22-12-2023
#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter third number:\n");
    scanf("%d",&c);
    avg = (a + b + c) / 3;
    printf("Average of three numbers is %f", avg);
    return 0;
}
