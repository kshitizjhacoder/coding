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
void insert_front(NODE head, int item)
{
    NODE temp = getnode();
    temp->info = item;
    if (head->link == head)
    {
        head->link = temp;
        temp->link = head;
        return;
    }
    NODE curr = head->link;
    head->link = temp;
    temp->link = curr;
}
void insert_rear(NODE head, int item)
{
    NODE temp = getnode();
    NODE curr = head->link;
    temp->info = item;
    if (head->link == head)
        head->link = temp;
    else
    {
        while (curr->link != head)
            curr = curr->link;
        curr->link = temp;
    }
    temp->link = head;
}
void delete_front(NODE head)
{
    NODE curr = head->link;
    if (curr == head)
    {
        printf("NO element\n");
        return;
    }
    NODE next = curr->link;
    printf("%d\n", curr->info);
    free(curr);
    head->link = next;
}
void delete_rear(NODE head)
{
    NODE curr = head->link;
    NODE prev = NULL;
    if (curr == head)
    {
        printf("NO elements\n");
        return;
    }
    while (curr->link != head)
    {
        prev = curr;
        curr = curr->link;
    }
    printf("%d\n", curr->info);
    free(curr);
    prev->link = head;
}
void display(NODE head)
{
    NODE curr = head->link;
    if (curr == head)
    {
        printf("NO nodes\n");
        return;
    }
    while (curr != head)
    {
        printf("%d ", curr->info);
        curr = curr->link;
    }
}
int main()
{
    NODE head = getnode();
    head->link = head;
    int i = 4, item;
    while (i--)
    {
        scanf("%d", &item);
        insert_rear(head, item);
    }
    delete_rear(head);
    display(head);
}