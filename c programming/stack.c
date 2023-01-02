#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main()
{
    int val, option;
    do
    {
        printf("\n *****Main Menu****\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your options : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the number you want to push in  stack \n");
            scanf("%d", &val);
            push(st, val);
            break;
        case 2:
            val = pop(st);
            if (val != -1)
                printf("The value deleted from stack is %d\n", val);
            break;
        case 3:
            val = peek(st);
            if (val != -1)
                printf("The value stored at the top of the stack is %d\n", val);
            break;
        case 4:
            display(st);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (option != 5);
    return 0;
}
void push(int st[], int val)
{
    if (top == max - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        st[top] = val;
    }
}
int pop(int st[])
{
    int val;
    if (top == -1)
    {
        printf("Stack Overflow\n");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}
void display(int st[])
{
    int i;
    if (top == -1)
        printf("Stack is Empty\n");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\n", st[i]);
        printf("\n");
    }
}
int peek(int st[])
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
        return (st[top]);
}