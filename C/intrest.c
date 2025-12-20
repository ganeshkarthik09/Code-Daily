//page 24 simple program 22-12-2023
#include<stdio.h>
#define principle 20000
#define period 5
int main()
{
    int year=1;
    float amount=principle;
    float value,inrate=0.02;
    while(year<=period)
    {
        printf("%2d %8.4f\n",year,amount);
        value=amount+inrate*amount;
        year=year+1;
        amount=value;
    }
    return 0;
}