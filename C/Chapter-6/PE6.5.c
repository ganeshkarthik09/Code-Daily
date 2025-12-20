#include <stdio.h>
int main()
{
    int maths, physics, chemistry, total;
    total = maths + physics + chemistry;
    printf("Enter your marks in maths , physics and chemistry marks respectively : ");
    scanf("%d%d%d", &maths, &physics, &chemistry);
    if (maths >= 60 && physics >= 50 && chemistry >= 40 && total >= 200 || maths + physics >= 150)
    {
        printf("You are eligible to enrol in the course");
    }
    else
    {
        printf("You are not eligible ");
    }

    return 0;
}