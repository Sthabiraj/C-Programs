#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = fact(n);
    printf("The factorial of %d is %d.", n, x);
    getch();
}
int fact(n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}