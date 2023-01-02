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
int count_sll(NODE first)
{
    int count = 0;
    NODE curr = first;
    while (curr != NULL)
    {
        count++;
        curr = curr->link;
    }
    return count;
}
NODE ascending_sll(NODE first, int count)
{
    int i, j, elem;
    NODE curr, next, curr_1;
    curr = first;
    for (i = 0; i < count - 1; i++)
    {
        curr_1 = curr;
        for (j = 0; j < count - i - 1; j++)
        {
            next = curr_1->link;
            if (curr_1->info > next->info && next != NULL)
            {
                elem = curr_1->info;
                curr_1->info = next->info;
                next->info = elem;
            }
            curr_1 = curr_1->link;
        }
        curr = curr->link;
    }
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
int main()
{
    NODE first = NULL;
    int item, ch, count;
    while (1)
    {
        printf("1.insert element in sll\n");
        printf("2.sort elements\n");
        printf("3.display elements\n");
        printf("4.exit\n");
        printf("Enter yout choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the elements \n");
            scanf("%d", &item);
            first = insert_rear(first, item);
            break;
        case 2:
            count = count_sll(first);
            first = ascending_sll(first, count);
            break;
        case 3:
            display(first);
            break;
        case 4:
            return 0;
        }
    }
}