//Quotient programm 22-12-2023
#include<stdio.h>
int main()
{
    int a,b,quotient;
    printf("Enter the dividend\n");
    scanf("%d",&a);
    printf("Enter the diviser\n");
    scanf("%d",&b);
    quotient= a%b;
    printf("Quotient of given number is %d",quotient);
    return 0;
}