#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void deletionofnode(int m, node **head);
node *creatinglinkedlist(int n);
void display(node *head);
int main()
{
    int n, m;
    node *HEAD = NULL;
    printf("enter the number of nodes\n");
    scanf("%d", &n);
    HEAD = creatinglinkedlist(n);
    display(HEAD);
    printf("enter the place from you to delete : ");
    scanf("%d", &m);
    deletionofnode(m, &HEAD);
    display(HEAD);
    return 0;
}
node *creatinglinkedlist(int n)
{
    node *head = NULL;
    node *temp = NULL;
    node *ptr = NULL;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the data in element %d : ", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;
        if (head == NULL)
            head = temp;
        else
        {
            ptr = head;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
        }
    }
    return head;
}
void display(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
}
void deletionofnode(int m, node **head)
{
    node *previous = *head;
    node *current = *head;
    if (*head == NULL)
        printf("List is empty");
    else if (m == 1)
    {
        *head = current->next;
        free(current);
        current = NULL;
    }
    else
    {
        while (m != 1)
        {
            previous = current;
            current = current->next;
            m--;
        }
        previous->next = current->next;
        free(current);
        current = NULL;
    }
}