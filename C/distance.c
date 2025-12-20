#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float D;
    printf("Enter the co-ordinates of first point \n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the co-ordinates of second point \n");
    scanf("%d%d", &x2, &y2);
    D = (float)pow((int)pow(x1 - x2, 2) + (int)pow(y1 - y2, 2), 0.5);
    printf("The distance between two points is %f", D);
    return 0;
}