#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r+");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    int num;
    system("Color 3F");
    system("pause");
    for (int i = 0; i < 5; i++)
    {
        fscanf(fptr, "%d", &num);
        printf("NUM is %d\n", num);
    }
    fclose(fptr);
    // BOOL WINAPI SetConsoleTextAttribute(_In_ HANDLE hConsoleOutput , _In_ WORD wAttributes);
    //   char name[] = {"@223445"};
    //   int l = strlen(name);
    //   printf("%d\n", l);
    //   int sym = isdigit(name[0]);
    //   printf("%d\n", sym);
    //   char ch = name[0];
    //   if (sym == name[0] - '0')
    //       printf("Proved");
    //   if (ch == 64)
    //       printf("Works\n");
}