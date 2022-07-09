// WAP to input age of 42 students of a class & coumtthe total number of students who is 18 years old?
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[42], i, c = 0;
    for (i = 0; i < 42; i++)
    {
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &a[i]);
        if (c == 18)
        {
            c = c + 1;
        }
    }
    printf("Total student who is 18 years old: ", c);
    getch();
}