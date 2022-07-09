#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;
    fp = fopen("nepal.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file!!");
    }
    else
    {
        printf("File created!!");
    }
    fprintf(fp, "Welcome to Nepal");
    fclose(fp);
    getch();
}