// area of the triangle
#include <stdio.h>
#include <math.h>
float SR(float a, float b, float c);
float area(float s, float a, float b, float c);
int main()
{
    float a, b, c, Area;
    float s;
    printf("Enter the length of three sides of the triangle : ");
    scanf("%f%f%f", &a, &b, &c);
   s= SR(a, b, c);

    Area=area(s, a, b, c);
    printf("Area of the given Triangle is : %f", Area);

    return 0;
}
float SR(float a, float b, float c)
{
    return (a + b + c) / 2;
    
}
float area(float s, float a, float b, float c)
{
    return sqrt(s * (s - a) * (s - b) * (s - c));
}