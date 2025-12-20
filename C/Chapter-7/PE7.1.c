// #include <stdio.h>
// int main()
// {
//     int n, i, arr[10];
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     // // while (n / 10)
//     // {
//     // //    for (i = 1; n / i; i *= 10)
//     //         ;
//     //     i = i / 10;
//     //      n = n % i;
//     //     printf(" %d \n", n % i);
//     //    printf(" ");
//     // }
//     while (n / 10)
//     {
//         for (i = 1; n / i; i *= 10)
//         {
//         }
//         i /= 10;
//         n %= i;
//     }
//     printf(" %d \n", n % i);
//     for (i = 1; n / i; i *= 10)
//     {
//     }
//     i/=10;
//     n /= i;

//     return 0;
// }
#include <stdio.h>

int main()
{
    int n, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
