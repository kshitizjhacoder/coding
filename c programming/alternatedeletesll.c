#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;

NODE getnode()
{
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    if (x == NULL)
    {
        printf("Memory not available\n");
        exit(0);
    }
    return x;
}
NODE insert_rear(NODE first, int item)
{
    NODE temp = getnode();
    temp->info = item;
    temp->link = NULL;
    if (first == NULL)
        return temp;
    NODE curr, prev;
    curr = first;
    prev = NULL;
    while (curr != NULL)
    {
        prev = curr;
        curr = curr->link;
    }
    prev->link = temp;
    return first;
}
void display(NODE first)
{
    NODE curr = first;
    while (curr != NULL)
    {
        printf("%d ", curr->info);
        curr = curr->link;
    }
    printf("\n");
}
NODE deletealternate(NODE first)
{
    if (first == NULL)
        return NULL;
    NODE curr = first, next = NULL, prev = NULL;
    while (curr != NULL)
    {
        prev = curr;
        curr = curr->link;
        if (curr == NULL)
            break;
        next = curr->link;
        prev->link = next;
        curr = next;
    }
    return first;
}
int main()
{
    int n, i, elem;
    NODE first = NULL;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &elem);
        first = insert_rear(first, elem);
    }
    display(first);
    first = deletealternate(first);
    display(first);
}