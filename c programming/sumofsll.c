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
void sum_sll(NODE first)
{
    int sum = 0, elem;
    NODE curr = first;
    while (curr != NULL)
    {
        elem = curr->info;
        printf("%d\n", elem);
        sum = sum + elem;
        curr = curr->link;
    }
    printf("Sum is : %d\n", sum);
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
    NODE first = NULL;
    int n, item;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements for %d\n", i);
        scanf("%d", &item);
        first = insert_rear(first, item);
    }
    sum_sll(first);
}