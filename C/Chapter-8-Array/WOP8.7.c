// Transpose of  A matrix
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the order of the matrix :");
    scanf("%d", &n);
    int arr[n][n], mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = arr[j][i];
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}