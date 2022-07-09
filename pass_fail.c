#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], i, pass = 0, fail = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] < 40)
        {
            fail = fail + 1;
        }
        else if (a[i] >= 40)
        {
            pass = pass + 1;
        }
    }
    printf("The no. of students pass: %d\n", pass);
    printf("The no. of students fail: %d", fail);
    getch();
}