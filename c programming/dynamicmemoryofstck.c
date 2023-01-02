#include <stdio.h>
#include <stdlib.h>
int *push(int s[], int *top, int ele, int *max);
void pop(int s[], int *top, int *max);
void display(int s[], int top, int max);
int main()
{
    int top = -1, ch, max, ele;
    int *s;
    printf("Enter the length of the stack\n");
    scanf("%d", &max);
    s = (int *)malloc(sizeof(int) * max);
    do
    {
        printf("1.push the element in the stack\n");
        printf("2.pop the element in the stack\n");
        printf("3.display the element in the stack\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to push\n");
            scanf("%d", &ele);
            s = push(s, &top, ele, &max);
            break;
        case 2:
            pop(s, &top, &max);
            break;
        case 3:
            display(s, top, max);
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (ch != 4);
}
int *push(int s[], int *top, int ele, int *max)
{
    if (*top < (*max) - 1)
    {
        (*top)++;
        s[*top] = ele;
    }
    else
    {
        (*max) = (*max) * 2;
        s = (int *)realloc(s, sizeof(int) * (*max));
        (*top)++;
        s[*top] = ele;
    }
    return s;
}
void pop(int s[], int *top, int *max)
{
    if ((*top) > -1)
    {
        printf("Element that has been poped is : %d\n", s[*top]);
        (*top)--;
    }
    else
        printf("Underflow\n");
}
void display(int s[], int top, int max)
{
    if (top >= max)
        printf("Overflow\n");
    else if (top <= -1)
        printf("Underflow\n");
    else
        for (int i = 0; i <= top; i++)
            printf("%d\n", s[i]);
}