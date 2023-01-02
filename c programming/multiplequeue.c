#include <stdio.h>
#include <stdlib.h>
void insert(int Q[], int rear[], int boun[], int i, int ele)
{
    if (rear[i] == boun[i + 1])
    {
        printf("Queue is full for %d\n", i);
        return;
    }
    rear[i] = rear[i] + 1;
    Q[rear[i]] = ele;
}
void delete (int Q[], int front[], int rear[], int boun[], int i)
{
    if (rear[i] == boun[i])
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Element deleted : %d\n", Q[front[i]]);
    front[i] = front[i] + 1;
}
void display(int Q[], int front[], int rear[], int boun[], int i)
{
    int j;
    if (rear[i] == boun[i])
    {
        printf("queue is empty\n");
        return;
    }
    for (j = front[i]; j <= rear[i]; j++)
        printf("%d ", Q[j]);
    printf("\n");
}
int main()
{
    int i, j, ch, ele, no_of_queue, size_of_each, max_size;
    printf("Enter the number of queue\n");
    scanf("%d", &no_of_queue);
    printf("Enter the size of each queue\n");
    scanf("%d", &size_of_each);
    max_size = no_of_queue * size_of_each;
    int Q[30], front[30] = {0}, rear[30] = {-1}, boun[30] = {-1};
    for (i = 0; i < no_of_queue; i++)
    {
        front[i] = (size_of_each * i);
        boun[i] = (size_of_each * i) - 1;
        rear[i] = (size_of_each * i) - 1;
    }
    do
    {
        printf("1.Insertion in the accepted queue\n");
        printf("2.Deletion from the accepted queue \n");
        printf("3.Display the accepted queues\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter which queue and element to be inserted\n");
            scanf("%d %d", &i, &ele);
            insert(Q, rear, boun, i, ele);
            break;
        case 2:
            printf("Enter the queue \n");
            scanf("%d", &i);
            delete (Q, front, rear, boun, i);
            break;
        case 3:
            printf("Enter the number of queue\n");
            scanf("%d", &i);
            display(Q, front, rear, boun, i);
            break;
        default:
            printf("Exit\n");
        }
    } while (ch < 4);
}