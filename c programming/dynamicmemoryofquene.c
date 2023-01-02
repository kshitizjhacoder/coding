#include <stdio.h>
#include <stdlib.h>
int *insert(int q[], int *rear, int ele, int *max);
void delete (int q[], int *front, int rear);
void display(int q[], int front, int rear);
int main()
{
    int max, ch, rear = -1, front = 0, ele;
    printf("Enter the number of terms\n");
    scanf("%d", &max);
    int *q;
    q = (int *)malloc(sizeof(int) * max);
    do
    {
        printf("1.insert the element in queue\n");
        printf("2.Delete the element from queue\n");
        printf("3.Display tyhe queue elements\n");
        printf("4. exit the code\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the element to be entered\n");
            scanf("%d", &ele);
            q = insert(q, &rear, ele, &max);
            break;
        case 2:
            delete (q, &front, rear);
            break;
        case 3:
            display(q, front, rear);
            break;
        default:
            printf("Exit or Invalid choice\n");
        }
    } while (ch != 4);
    free(q);
}
int *insert(int q[], int *rear, int ele, int *max)
{
    if ((*rear) < (*max) - 1)
    {
        (*rear)++;
        q[*rear] = ele;
    }
    else
    {
        *max = (*max) * 2;
        q = (int *)realloc(q, sizeof(int) * (*max));
        (*rear)++;
        q[*rear] = ele;
    }
    return q;
}
void delete (int q[], int *front, int rear)
{
    if (*front > rear)
        printf("Deletion cannot be possible\n");
    else
    {
        printf("Elements to be deleted is : %d\n", q[*front]);
        (*front)++;
    }
}
void display(int q[], int front, int rear)
{
    if (front > rear)
        printf("There are no elements\n");
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("Elements at %d is : %d\n", i, q[i]);
        }
    }
}