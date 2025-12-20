#include<stdio.h>
int main()
{
    int i=1;
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(i<=n )
    {
        printf("%d \n",i);
        i=i+1;
    }
    return 0;
}