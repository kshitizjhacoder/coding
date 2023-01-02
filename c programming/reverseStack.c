#include <stdio.h>
#include <stdlib.h>
#define Max 10
int stack[Max], top = -1;
int reverse(int s[Max]);
int main()
{
    int val, i, rev[Max];
    printf("Enter the value you want to push in the stack\n");
    for (i = 0; i < Max; i++)
    {
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
    printf("Stack are : \n");
    top = 0;
    while (top < Max)
    {
        printf("%d \t", stack[top]);
        top++;
    }
    printf("\n");
    top = Max;
    rev[top] = reverse(stack);
    printf("Elements in reverse order can be : \n");
    while (top >= 0)
    {
        printf("%d \t", rev[top]);
        top--;
    }
    return 0;
}
int reverse(int s[Max])
{
    top = Max - 1;
}