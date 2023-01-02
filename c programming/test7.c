//question 4

#include <stdio.h>
#include <conio.h>
char main()
{
    printf("    short int is %d bytes \n", sizeof(short int));
    printf("          int is %d bytes \n", sizeof(int));
    printf("     long int is %d bytes \n", sizeof(long int));
    printf("\n");
    printf("        float is %d bytes \n", sizeof(float));
    printf("       double is %d bytes \n", sizeof(double));
    printf("  long double is %d bytes \n", sizeof(long double));
    printf("\n");
    printf("         char is %d bytes \n", sizeof(char));
    getch();
}
