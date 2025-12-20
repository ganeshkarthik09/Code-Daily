#include <stdio.h>
#include <stdlib.h>
int binarySearch(int n, int arr[n], int key, int *count, int low, int high)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        (*count)++; // Incrementthecomparisoncount
        if (arr[mid] == key)
        {
            return mid; // Keyfound
        }
        else if (arr[mid] > key)
        {
            // Searchinthelefthalf
            return binarySearch(n, arr, key, count, low, mid - 1);
        }
        else
        {
            // Searchintherighthalf
            return binarySearch(n, arr, key, count, mid + 1, high);
        }
    }
    return -1; // Keynotfound
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int *count = (int *)malloc(sizeof(int));
    *count = 0;
    int res = binarySearch(n, arr, key, count, 0, n - 1);
    if (res == -1)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found at index %d\n", res);
        printf("Number of comparisons: %d\n", *count);
    }
    free(count);
    return 0;
}

//----------------------spiral matrix--------------------
// #include <stdio.h>
// int main()
// {

//     int m, n, i, j; // m,i is rows and n,j is columns
//     printf("Enter the number of rows : ");
//     scanf("%d", &m);
//     printf("Enter the number of columns : ");
//     scanf("%d", &n);
//     int arr[m][n];
//     printf("Start entering the data :");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Required result is : \n");
//     /*  for(i=0;i<m;i++)
//      {
//          for(j=0;j<n;j++){
//              printf("%d\t",arr[i][j]);
//          }
//          printf("\n");
//      }*/
//     for (j = 0, i = 0; j < n; j++)
//     {
//         printf("%d ", arr[i][j]);
//     }
//     // printf("\n");
//     for (i = 1, j = n - 1; i < m; i++)
//     {
//         printf("%d ", arr[i][j]);
//     }
//     for (j = n - 2, i = m - 1; j >= 0; j--)
//     {
//         printf("%d ", arr[i][j]);
//     }
//     for (i = m - 2, j = 0; i > 0; i--)
//     {
//         printf("%d ", arr[i][j]);
//     }
//     for (i = 1, j = 1; j < n - 1; j++)
//     {
//         printf("%d ", arr[i][j]);
//     }
//     return 0;
// }
//--------------------------MAGIC SQUARE---------------------
// #include <stdio.h>

// int main()
// {
//     int n, i, j, g = 0, k, p, q; // i is row and j is column
//     printf("Enter an odd number : ");
//     scanf("%d", &n); // n is a number
//     // i=n;
//     // j=n;
//     int a[n][n];
//     for (i = 0; i < n; i++) // initialising every elment of matrix to be 0
//     {
//         for (j = 0; j < n; j++)
//         {
//             a[i][j] = 0;
//         }
//     }
//     int f = n / 2; // f is to identify in which column we have to place 1
//     a[g][f] = 1;
//     /* for(i=0;i<n;i++){printf("\n");
//          for(j=0;j<n;j++){
//           printf("%d",magic[i][j]);
//              printf("\t");
//          }*/

//     //}

//     // magic[0][n%2]=1;
//     for (k = 2; k <= n * n; k++)
//     {
//         p = g;
//         q = f;
//         g = (n + g - 1) % n;
//         f = (n + f - 1) % n;
//         if (a[g][f] == 0)
//         {
//             a[g][f] = k;
//         }
//         else
//         {
//             g = p;
//             f = q;
//             g = g + 1;
//             if (g >= n)
//             {
//                 g = 0;
//             }
//             a[g][f] = k;
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }