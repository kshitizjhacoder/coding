#include <stdio.h>
int main()
{
    int a, b, c, max = 0;
    printf("enter the two number to check which one is greatest\n");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    printf("the greater of two number is %d\n", max);
    printf("enter the third number to check greatest\n");
    scanf("%d", &c);
    max = (max > c) ? max : c;
    printf("the greatest number is %d", max);
    return 0;
}