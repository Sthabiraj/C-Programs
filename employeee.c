#include <stdio.h>
#include <conio.h>
struct employeee
{
    char name[20];
    float salary;
} e[100];
void main()
{
    int i, n, c = 0;
    printf("Enter the no. of employee: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the information of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        if (e[i].salary >= 15000 && e[i].salary <= 20000)
        {
            c = c + 1;
        }
    }
    printf("The no. of employees having salaryfrom 15000 to 20000: %d", c);
    getch();
}