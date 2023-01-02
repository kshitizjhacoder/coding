#include <stdio.h>
#include <stdlib.h>
struct duo
{
    int info;
    struct duo *llink;
    struct duo *rlink;
};
typedef struct duo *D;
D getnode()
{
    D x;
    x = (D)malloc(sizeof(struct duo));
    if (x == NULL)
    {
        printf("Memory not available\n");
        exit(0);
    }
    return x;
}
D insert_front(D first, int item)
{
    D temp = getnode();
    temp->info = item;
    temp->llink = NULL;
    temp->rlink = NULL;
    if (first == NULL)
        return temp;
    temp->rlink = first;
    first->llink = temp;
    return temp;
}
D insert_rear(D first, int item)
{
    D temp = getnode();
    D curr = first;
    temp->info = item;
    temp->llink = NULL;
    temp->rlink = NULL;
    if (first->rlink == NULL)
        return temp;
    while (curr->rlink != NULL)
        curr = curr->rlink;
    curr->rlink = temp;
    temp->llink = curr;
    return first;
}
D delete_front(D first)
{
    if (first == NULL)
    {
        printf("No node to be deleted\n");
        return NULL;
    }
    else if (first->rlink == NULL)
    {
        printf("Element to be deleted %d\n", first->info);
        free(first);
        return NULL;
    }
    printf("Element deleted %d\n", first->info);
    first = first->rlink;
    first->llink = NULL;
    return first;
}
D delete_rear(D first)
{
    if (first == NULL)
    {
        printf("No node to be deleted\n");
        return NULL;
    }
    D curr = first->rlink;
    while (curr->rlink != NULL)
        curr = curr->rlink;
    printf("Element to be deleted is %d\n", curr->info);
    curr->llink = NULL;
    free(curr);
    return first;
}
void display(D first)
{
    if (first == NULL)
    {
        printf("No node present\n");
        return NULL;
    }
    D curr = first;
    printf("Elements are : ");
    while (curr = NULL)
    {
        printf("%d", curr->info);
        curr = curr->rlink;
    }
    printf("\n");
}
int main()
{
}