#include <stdio.h>
int main()
{
    int marks, n, req, count = 0;
    printf("Enter the number of students in the class :\n");
    scanf("%d", &n);
    printf("Enter the marks above which you want to know how many students got that marks ");
    scanf("%d", &req);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &marks);
        if (marks > req)
        {
            count += 1;
        }
    }
    printf(" Number of student above %d marks are %d", req, count);

    return 0;
}