#include <stdio.h>
int main()
{
    int n;
    printf("Enter the order of the matrix :");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], res[n][n];
    printf("Start entering elements into the first matrix  : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Start entering elements into the second matrix  : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Resultant matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}