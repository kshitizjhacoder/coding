#include <stdio.h>
#include <stdlib.h>
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
        printf("Memory not available");
        exit(0);
    }
    return x;
}
void display(NODE last)
{
    NODE curr = last->link;
    if (last == NULL)
    {
        printf("Empty NODE\n");
        return;
    }
    printf("Elements are : ");
    while (curr->link != last)
    {
        printf("%d ", curr->info);
        curr = curr->link;
    }
    printf("%d", curr->info);
    return;
}
NODE insert_front(NODE last, int item)
{
    NODE temp = getnode();
    temp->info = item;
    if (last == NULL)
        last = temp;
    else
        temp->link = last->link;
    last->link = temp;
    return last;
}
NODE insert_rear(NODE last, int item)
{
    NODE temp = getnode();
    temp->info = item;
    if (last == NULL)
        last = temp;
    else
        temp->link = last->link;
    last->link = temp;
    return temp;
}
NODE delete_front(NODE last)
{
    NODE first;
    if (last == NULL)
    {
        printf("NO node present\n");
        return NULL;
    }
    if (last->link == last)
    {
        printf("%d is deleted", last->info);
        free(last);
        return NULL;
    }
    first = last->link;
    last->link = first->link;
    printf("%d is deleted", last->info);
    free(first);
    return last;
}
NODE delete_rear(NODE last)
{
    NODE curr = last->link;
    if (last == NULL)
    {
        printf("NO node present\n");
        return NULL;
    }
    if (last->link == NULL)
    {
        printf("%d is deleted", last->info);
        free(last);
        return NULL;
    }
    NODE first = last->link;
    last->link = first->link;
    printf("%d is deleted", last->info);
    free(first);
    return last;
}