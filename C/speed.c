//calculating speed of car 24-12-2023
#include<stdio.h>
int main()
{
    float d,t;
    printf("Enter the distance travelled by the car in KM : \n");
    scanf("%f",&d);
    printf("Enter the time taken in hours:\n");
    scanf("%f",&t);
    printf("Speed of the car is %f KM/h : ",d/t );
    return 0;
}