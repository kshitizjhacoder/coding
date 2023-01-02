#include <stdio.h>
#include <stdlib.h>
int *insert(int cq[], int *front, int *rear, int *n, int *count, int ele)
{
    int i;
    if (*count == *n && (*front) > (*rear))
    {
        (*n)++;
        cq = (int *)realloc(cq, sizeof(int) * (*n));
        for (i = (*n) - 1; i > (*front); i--)
        {
            cq[i] = cq[i - 1];
        }
        cq[*front] = ele;
        (*front)++;
        (*count)++;
    }
    else if (*count == *n)
    {
        (*n)++;
        cq = (int *)realloc(cq, sizeof(int) * (*n));
        (*rear) = ((*rear) + 1) % (*n);
        cq[*rear] = ele;
        (*count)++;
    }
    else
    {
        (*count)++;
        (*rear) = (*rear + 1) % (*n);
        cq[*rear] = ele;
    }
    return cq;
}
void delete (int cq[], int *front, int *n, int *count)
{
    if (*count == 0)
    {
        printf("Queue is empty\n");
        // return cq;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", cq[*front]);
        (*front) = ((*front) + 1) % (*n);
        (*count)--;
        // cq = (int *)realloc(cq, sizeof(int) * (*n));
        // return cq;
    }
}
void display(int cq[], int front, int n, int count)
{
    if (count == 0)
        printf("queue is empty\n");
    else
    {
        for (int i = 0; i < count; i++)
        {
            printf("%d ", cq[front]);
            front = (front + 1) % n;
        }
    }
    printf("\n");
}
int main()
{
    int n, i, j, ch, ele, front = 0, count = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int rear = n - 1;
    int *cq;
    cq = (int *)malloc(sizeof(int) * n);
    do
    {
        printf("1.insert the elements in queue\n");
        printf("2.Delete the elements\n");
        printf("3.Display the elements\n");
        printf("Exit for others\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the element to be inserted\n");
            scanf("%d", &ele);
            cq = insert(cq, &front, &rear, &n, &count, ele);
            break;
        case 2:
            delete (cq, &front, &n, &count);
            break;
        case 3:
            display(cq, front, n, count);
            break;
        default:
            printf("Exit\n");
        }
    } while (ch < 4);
    free(cq);
    return 0;
}