// multiplication of two matrix
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the order of matrices : ");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], res[n][n];
    printf("Start entering the elements into the first matrix ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = 0;
        }
    }



    
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
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Start entering the elements into the second matrix ");
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
            // res[i][j]=arr1[i][j]*arr2[i][j]+arr1[i][j+1]*arr2[i+1][j]+arr1[i][j+2]*arr2[i+2][j];
            for (int k = 0; k < n; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("\n");
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