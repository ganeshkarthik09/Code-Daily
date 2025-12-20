#include <stdio.h>
#include <math.h>
int main()
{
    int count = 0;
    for (float i = 0; i < 10; i += 0.1)
    {
        printf("%.3f ", sqrt(i));
        count++;
        if (count % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}