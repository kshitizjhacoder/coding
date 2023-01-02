#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int stack[MAX], topA = -1, topB = MAX;
void pushA(int val)
{
    if (topA == topB - 1)
        printf("Stackoverflow\n");
    else
    {
        topA += 1;
        stack[topA] = val;
    }
}
int popA()
{
    int val;
    if (topA == -1)
    {
        printf("\n Underflow\n");
        val = -999;
    }
    else
    {
        val = stack[topA];
        topA--;
    }
    return val;
}
void display_StackA()
{
    int i;
    if (topA == -1)
        printf("Stack Overflow\n");
    else
    {
        for (i = topA; i >= 0; i--)
            printf("\t %d", stack[i]);
    }
}
void pushB(int val)
{
    if (topB - 1 == topA)
        printf("\nStack Overflow\n");
    else
    {
        topB -= 1;
        stack[topB] = val;
    }
}
int popB()
{
    int val;
    if (topB == MAX)
    {
        printf("\n underFLow \n");
        val = -999;
    }
    else
    {
        val = stack[topB];
        topB++;
    }
}
void display_StackB()
{
    int i;
    if (topB == MAX)
        printf("\n Stack Overflow \n");
    else
    {
        for (i = topB; i <= MAX; i++)
            printf("\t %d", stack[i]);
        printf("\n");
    }
}
void main()
{
    int option, val;
    do
    {
        printf("*****Main Menu*****\n");
        printf("1.Push in the stack A\n");
        printf("2.Pop in the stack A\n");
        printf("3.Display the Stack A\n");
        printf("4.Push in the Stack B\n");
        printf("5.Pop in the Stack B\n");
        printf("6.Display the Stack B\n");
        printf("7.Exit \n");
        printf("Enter your choice : \n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value to push in the Stack A\n");
            scanf("%d", &val);
            pushA(val);
            break;
        case 2:
            val = popA();
            printf("The first element in the stack which is remove is %d\n", val);
            break;
        case 3:
            display_StackA();
            break;
        case 4:
            printf("Enter the value to push in the Stack B\n");
            scanf("%d", &val);
            pushB(val);
            break;
        case 5:
            val = popB();
            printf("The first element in the STack B which is remove is %d\n", val);
            break;
        case 6:
            display_StackB();
            break;
        case 7:
            printf("The program has been terminated \n");
            exit(0);
        default:
            printf("Inavalid choice ...... Try again \n");
        }
    } while (option != 7);
}
