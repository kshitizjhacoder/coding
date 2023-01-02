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
    printf("\n");
    NODE curr = first;
    while (curr != NULL)
    {
        printf("%d ", curr->info);
        curr = curr->link;
    }
    printf("\n");
}
void delete_replicate(NODE first)
{
    NODE curr = first, next = NULL, prev = NULL;
    while (curr != NULL)
    {
        prev = curr;
        next = curr->link;
        while (next != NULL)
        {
            if (curr->info == next->info)
            {
                prev->link = next->link;
                next = next->link;
            }
            else
            {
                prev = next;
                next = prev->link;
            }
        }
        curr = curr->link;
    }
}
int main()
{
    NODE first = NULL;
    int item, i, n;
    printf("Enter the number of nodes\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &item);
        first = insert_rear(first, item);
    }
    display(first);
    delete_replicate(first);
    display(first);
}