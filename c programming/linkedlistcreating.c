#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *createalinkedlist(int n);
void displayList(node *head);
int main()
{
    int n = 0, data;
    node *HEAD = NULL;
    printf("\n how many nodes\n");
    scanf("%d", &n);
    HEAD = createalinkedlist(n);
    displayList(HEAD);
    return 0;
}
node *createalinkedlist(int n)
{
    int i = 0;
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
    for (i = 0; i < n; i++)
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the data for node number %d: ", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;
        if (head == NULL)
            head = temp;
        else
        {
            p = head;
            while (p->next != NULL)
                p = p->next;
            p->next = temp;
        }
    }
    return head;
}
void displayList(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf(" %d->", p->data);
        p = p->next;
    }
}