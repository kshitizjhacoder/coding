#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
void addfile(FILE *fptr, char id[], char password[])
{
    fptr = fopen("file.txt", "a+");
    printf("Enter the id\n");
    scanf("%[^\n]s", id);
    printf("Enter the password\n");
    scanf(" %[^\n]s", password);
    fputs(id, fptr);
    fputs("\n", fptr);
    fputs(password, fptr);
}
void viewfile(FILE *fptr, char id[], char password[])
{
    fptr = fopen("file.txt", "r+");
    fscanf(fptr, "%[^\n]s", id);
    fscanf(fptr, "%s", password);
    printf("The id is : %s\n", id);
    printf("The password is : %s", password);
    fclose(fptr);
}