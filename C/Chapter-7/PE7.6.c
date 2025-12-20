#include <stdio.h>
int main()
{
    int arr[10], n = 0, i;
    printf("Start entering the ages : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] <= 60 && arr[i] >= 50)
        {
            n += 1;
        }
    }
    printf("%d", n);

    return 0;
}