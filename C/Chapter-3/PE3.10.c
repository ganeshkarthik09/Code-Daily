#include <stdio.h>
int main()
{
    int Days;
    printf("Enter the number of days : ");
    scanf("%d", &Days);
    int Year = (Days / 365);
    int Weeks = (Days / 7);
    printf(" %d years and %d weeks and %d Days", Year, (Days % 365) / 7, (Days % 365) % 7);
    return 0;
}