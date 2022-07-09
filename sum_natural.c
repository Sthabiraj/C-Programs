#include <stdio.h>
#include <conio.h>
void main()
{
    int i, s = 0;
    for (i = 1; i <= 10; i++)
    {
        s = s + i;
    }
    printf("Sum of 10 natural number: %d", s);
    getch();
}