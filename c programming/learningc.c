#include <stdio.h>
int main() // main fumction
{
    printf("Enter a number please \n");
    int n;
    scanf("%d", &n);
    if (n % 2 == 0 && n != 0) // conditional statement
        printf("Even hai\n");
    else if (n % 2 == 1 && n != 0)
        printf("odd hai\n");
    else
        printf("zero hai\n");
    // printf("my number is  : %d", n); // output statement
    return 0;
}