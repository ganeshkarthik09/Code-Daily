#include <stdio.h>
int main()
{
    char Bhi;
    printf("Enter a character :");
    scanf("%c", &Bhi);
    if (Bhi == 'a' || Bhi == 'e' || Bhi == 'i' || Bhi == 'o' || Bhi == 'u' || Bhi == 'A' || Bhi == 'E' || Bhi == 'I' || Bhi == 'O' || Bhi == 'U')

    {
        printf("Entered character is a Vowel \n");
    }
    else
    {
        printf("Entered character is a consonant ");
    }

    return 0;
}