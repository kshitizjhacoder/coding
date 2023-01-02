#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <Math.h>
#define Max_size 20
void push(float S[Max_size], int *top, float ele)
{
    if (*top > S[Max_size])
        printf("Stack overflow\n");
    else
    {
        (*top)++;
        S[*top] = ele;
    }
}
float pop(float S[Max_size], int *top)
{
    if (*top <= -1)
        printf("Underflow\n");
    else
    {
        float ele = S[*top];
        (*top)--;
        return ele;
    }
}
float operation(float op_1, float op_2, char symbol)
{
    float po = pow(op_1, op_2);
    printf("%f\n", po);
    switch (symbol)
    {
    case '+':
        return op_1 + op_2;
    case '-':
        return op_1 - op_2;
    case '*':
        return op_1 * op_2;
    case '/':
        return op_1 / op_2;
    case '$':
    case '^':
        return po;
    default:
        printf("Invalid operator\n");
        return -999;
    }
}
void evalaution(char post[Max_size])
{
    char symbol;
    float operand_1, operand_2, result;
    float S[Max_size];
    int i, top = -1;
    for (i = 0; post[i] != '\0'; i++)
    {
        symbol = post[i];
        if (isdigit(symbol))
        {
            push(S, &top, post[i] - '0');
        }
        else
        {
            operand_2 = pop(S, &top);
            operand_1 = pop(S, &top);
            result = operation(operand_1, operand_2, symbol);
            push(S, &top, result);
        }
    }
    while (top > -1)
    {
        printf("Result is %.2f\n", S[top]);
        top--;
    }
}
int main()
{
    char postfix[Max_size];
    printf("Enter your postfix expression\n");
    scanf("%[^\n]s", postfix);
    evalaution(postfix);
    return 0;
}