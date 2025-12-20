#include <stdio.h>
#include <ctype.h>
int main()
{
    char alpha;
    printf("Enter an alphabet :\n");
    alpha = getchar();
    if (islower(alpha))
    {
        putchar(toupper(alpha));
    }
    else
    {
        putchar(tolower(alpha));
    }

    char Ganesh[15];
    scanf("%7s", &Ganesh);
    printf("%7s", Ganesh);
    return 0;
}