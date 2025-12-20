#include <stdio.h>
int main()
{
    typedef int age;
    typedef float height;
    age marks;
    printf("Enter the number of marks ");
    scanf("%d",&marks);
    printf("Marks are %d", marks);
    return 0;
}