#include <stdio.h>
int main()
{
    float D, R, E;
    printf("Enter the currency value in dollar : \n");
    scanf("%f", &D);
    R = D * 83.88;
    E = D * 0.91;
    printf("The value of the currency in rupees is %.2f and in Euros is %.2f", R, E);

    return 0;
}