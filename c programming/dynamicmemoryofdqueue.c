#include <stdio.h>
#include <stdlib.h>
void insert_front(int dq[], int *front, int *rear, int ele);
void insert_rear(int dq[], int *front, int max, int ele);
void delete_rear(int dq[], int *front, int *rear);
void delete_front(int dq[], int *front, int rear);
void display(int dq[], int front, int rear);
int main()
{
    int max, front = 0, rear = -1, ch, ele;
    printf("Enter number of elements in deques\n");
    scanf("%d", &max);
    int *dq;
    do
    {
        printf("1.Insert the item using front\n");
        printf("2.Insert the element using rear\n");
        printf("3. Delete using the rear\n");
        printf("4.Delete using the front\n");
        printf("5.Display the elements \n");
        printf("Enter your choice input\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the item to be inserted\n");
            scanf("%d", &ele);
            insert_front(dq, &front, &rear, ele);
            break;
        case 2:
            printf("Enter the item to be inserted\n");
            scanf("%d", &ele);
            insert_rear(dq, &rear, max, ele);
            break;
        case 3:
            delete_rear(dq, &front, &rear);
            break;
        case 4:
            delete_front(dq, &front, rear);
            break;
        case 5:
            display(dq, front, rear);
            break;
        default:
            printf("EXIT\n");
        }
    } while (ch < 5);
    return 0;
}
void insert_front(int dq[], int *front, int *rear, int ele)
{

    if (*front == 0 && *rear == -1)
    {
        (*rear)++;
        dq[*rear] = ele;
    }
    else if (*front != 0 && *front > 0)
    {
        (*front)--;
        dq[*front] = ele;
    }
    else
        printf("Insertion is not possible\n");
}
void insert_rear(int dq[], int *rear, int max, int ele)
{
    if (*rear < max - 1)
    {
        (*rear)++;
        dq[*rear] = ele;
    }
    else
        printf("Insertion is not possible\n");
}
void delete_rear(int dq[], int *front, int *rear)
{
    if (*front > *rear)
        printf("Deletion is not possible\n");
    else
    {
        printf("Element which deleted is :%d\n", dq[*rear]);
        (*rear)--;
        if (front > rear)
        {
            *front = 0;
            *rear = -1;
        }
    }
}
void delete_front(int dq[], int *front, int rear)
{
    if (*front > rear)
        printf("Deletion cannot be possible");
    else
    {
        printf("Element to be deleted : %d\n", dq[*front]);
        (*front)++;
    }
}
void display(int dq[], int front, int rear)
{
    if (front > rear)
        printf("There are no elements\n");
    else
    {
        for (int i = front; i <= rear; i++)
            printf("Element in %d is %d\n", i, dq[i]);
    }
}