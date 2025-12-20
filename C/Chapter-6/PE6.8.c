#include <stdio.h>
int main()
{
    float pa, na;
    int choice;
    printf("Enter the Purchase amout : ");
    scanf("%f", &pa);
    printf("Enter 1 if you are buying Mill cloth and 2 if Handloom cloth :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if (pa <= 100 && pa > 0)
        {
            na = pa;
            printf("Net amount to be paid is %f ", na);
        }
        else if (pa <= 200 && pa >= 101)
        {
            na = ((pa * 5) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }
        else if (pa >= 201 && pa <= 300)
        {
            na = ((pa * 7.5) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }
        else
        {
            na = ((pa * 10) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }

        break;

    case 2:
        if (pa <= 100 && pa > 0)
        {
            na = ((pa * 5) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }
        else if (pa <= 200 && pa >= 101)
        {
            na = ((pa * 7.5) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }
        else if (pa >= 201 && pa <= 300)
        {
            na = ((pa * 10) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }
        else
        {
            na = ((pa * 15) / 100) + pa;
            printf("Net amount to be paid is %f ", na);
        }

        break;
    default:
        printf("Invalid choice ");
        break;
    }

    return 0;
}