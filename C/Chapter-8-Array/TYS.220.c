// Program to input an array of 10 digit and find max,min,average of elements of array
#include <stdio.h>

int main()
{
    int sum = 0;
    int arr[10], n;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        sum += arr[j];
    }
    printf("Average of the elements is %f \n", sum / 10.0);
    int max;
    int min;
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum and maximum elements are %d,%d respectively", min, max);

    return 0;
}