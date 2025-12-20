//Speed calculatiion
#include <stdio.h>
int main()
{
    float D, T;
    // float s = D / T * 60;
    printf("Enter the distance travelled by the car in Kilo meters :");
    scanf("%f", &D);
    printf("Enter the time taken by the car to cover that distance in minutes :");
    scanf("%f", &T);
    float s = D / T * 60;
    printf("Speed of the car is : %f KM/h", s);

    return 0;
}