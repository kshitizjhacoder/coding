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
NODE delete_front(NODE first)
{
    if (first == NULL)
    {
        printf("Queue is  empty\n");
        return first;
    }
    printf("Delted elemenent is %d\n", first->info);
    NODE next = first->link;
    free(first);
    return next;
}
void display(NODE first)
{
    NODE curr = first;
    while (curr != NULL)
    {
        printf("%d ", curr->info);
        curr = curr->link;
    }
}
int main()
{
    int ch, item;
    NODE first = NULL;
    while (1)
    {
        printf("1. Insert elements in queue\n");
        printf("2. Delete elements from queue\n");
        printf("3. Display elements of queue\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be inserted\n");
            scanf("%d", &item);
            first = insert_rear(first, item);
            break;
        case 2:
            first = delete_front(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}