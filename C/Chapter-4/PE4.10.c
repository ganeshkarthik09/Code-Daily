#include <stdio.h>
int main()
{
    int l, m, n;
    printf("Enter three numbers :");
    scanf("%d%d%d", &l, &m, &n);
    int largest = (l > m) ? (l > n ? l : n) : (m > n ? m : n);
    printf("Largest number is %d", largest);

    return 0;
}