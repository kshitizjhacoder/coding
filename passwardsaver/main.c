#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include "strengthpassword.h"
#include "filemanager.h"

int main()
{
    system("cls");
    system("Color 2F");
    char password[10], id[20];
    FILE *fptr;
    addfile(fptr, id, password);
    printf("\n");
    system("pause");
    int i = strengthchecker(id, password);
    printf("your password strength is %d\n", i);
    viewfile(fptr, id, password);
}