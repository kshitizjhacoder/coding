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
void insert_rear(NODE head, int item)
{
    NODE temp = getnode();
    temp->info = item;
    temp->link = NULL;
    if (head->link == NULL)
    {
        head->link = temp;
        return;
    }
    NODE curr = head->link;
    while (curr->link != NULL)
        curr = curr->link;
    curr->link = temp;
}
void display(NODE head)
{
    NODE curr = head->link;
    if (curr == NULL)
    {
        printf("Empty single list with head\n");
        return;
    }
    printf("Elements are : ");
    while (curr != NULL)
    {
        printf("%d ", curr->info);
        curr = curr->link;
    }
    printf("\n");
}
void merge(NODE head_1, NODE head_2)
{
    NODE curr = head_1->link;
    NODE next = head_2->link;
    while (curr->link != NULL)
    {
        curr = curr->link;
    }
    curr->link = next;
}
int main()
{
    NODE head_1 = getnode();
    head_1->link = NULL;
    NODE head_2 = getnode();
    head_2->link = NULL;
    int n, m, item;
    printf("Enter the number of nodes in the first list\n");
    scanf("%d", &n);
    printf("Enter the number of nodes in the second list\n");
    scanf("%d", &m);
    printf("Enter the element in first node : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &item);
        insert_rear(head_1, item);
    }
    display(head_1);
    printf("Enter the element in second node : \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &item);
        insert_rear(head_2, item);
    }
    display(head_2);
    merge(head_1, head_2);
    display(head_1);
}