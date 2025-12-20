// Average of three numbers 22-12-2023
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    float k =(a+b+c)/3.0;
    printf("Average of three numbers is %f",k);
    return 0;
}