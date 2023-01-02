#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max_size 20
int F(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
    case '%':
        return 4;
    case '$':
    case '^':
        return 5;
    case '(':
        return 0;
    case '#':
        return -1;
    default:
        return 8;
    }
}
int G(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
    case '%':
        return 3;
    case '$':
    case '^':
        return 6;
    case '(':
        return 9;
    case ')':
        return 0;
    default:
        return 7;
    }
}
void push(char S[Max_size], int *top, char ele)
{
    if (*top > Max_size)
        printf("Stack overflow\n");
    else
    {
        (*top)++;
        S[*top] = ele;
    }
}
char pop(char S[Max_size], int *top)
{
    if (*top <= -1)
        printf("Underflow\n");
    else
    {
        char ele = S[*top];
        (*top)--;
        return ele;
    }
}
void inftopost(char inf[Max_size])
{
    int j = 0, n, top = -1;
    char S[Max_size], postfix[Max_size], symbol;
    n = strlen(inf);
    push(S, &top, '#');
    for (int i = 0; i < n; i++)
    {
        symbol = inf[i];
        while (F(S[top]) > G(symbol))
            postfix[j++] = pop(S, &top);
        // printf("%s\n", postfix);
        if (F(S[top]) != G(symbol))
            push(S, &top, symbol);
        else
            top--;
    }
    while (S[top] != '#')
        postfix[j++] = pop(S, &top);
    postfix[j] = '\0';
    printf("Result is : %s\n", postfix);
}
int main()
{
    int n;
    char infix[Max_size];
    printf("Eter your Infix String\n");
    scanf("%[^\n]s", infix);
    printf("%s\n", infix);
    inftopost(infix);
    return 0;
}