#include <stdio.h>
#include <conio.h>
void main()
{
    int roll;
    char name[20];
    char adress[10];
    int phone;
    char ans;
    FILE *fp;
    fp = fopen("student.dat", "w");
    if (fp == NULL)
    {
        printf("Error creating file!!");
    }
    else
    {
        printf("File created...");
    }
    do
    {
        printf("\nEnter the information of student\n");
        printf("Roll no: ");
        scanf("%d", &roll);
        printf("Name: ");
        scanf("%s", name);
        printf("Adress: ");
        scanf("%s", adress);
        printf("Phone no: ");
        scanf("%d", &phone);
        fprintf(fp, "\n%d %s %s %d", roll, name, adress, phone);
        printf("Do you want to continue [y/n] ?");
        ans = getch();
    } while (ans != 'n');
    fclose(fp);
    fp = fopen("student.dat", "r");
    if (fp == NULL)
    {
        printf("Error opening file!!");
    }
    printf("\nThe information on the file:\n");
    printf("Roll no\tName\tAdress\tPnone no");
    while (fscanf(fp, "%d %s %s %d", &roll, name, adress, &phone) != EOF)
    {
        printf("\n%d\t%s\t%s\t%d", roll, name, adress, phone);
    }
    fclose(fp);
    getch();
}