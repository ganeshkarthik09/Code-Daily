#include <stdio.h>
float Rice = 16.75;
float Sugar = 15.00;
int main()
{
    int k;
    printf("Enter 1 to get price of the sugar and 2 for Rice \n");
    scanf("%d", &k);
    if (k == 1)
    {
        printf("Price of the sugar is %f", Sugar);
    }
    else
    {
        printf("Price of the rice is %f", Rice);
    }

    return 0;
}
