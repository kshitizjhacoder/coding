#include <stdio.h>
#include <stdlib.h>

void accept(int *a, int n)
{
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int *a, int n)
{
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int *insertspecific(int *a, int pos, int ele, int *n)
{
    int inti_start = *n;
    if (pos > 0 && pos < *n)
    {
        while (inti_start != pos)
        {
            a[inti_start] = a[inti_start - 1];
            inti_start--;
        }
        a[pos] = ele;
        (*n)++;
        a = (int *)realloc(a, sizeof(int) * (*n));
        return a;
    }
    printf("Invalid position to enter \n");
    return a;
}
int deletedpecific(int *a, int pos, int n)
{
    int pos_term = pos;
    if (pos > 0 && pos < n)
    {
        printf("Element deleted is : %d\n", a[pos]);
        while (pos_term != n - 1)
        {
            a[pos_term] = a[pos_term + 1];
            pos_term++;
        }
        return n - 1;
    }
    printf("Invalid position to delete\n");
    return n;
}
int main()
{
    int n, pos, ele, ch;
    printf("Enter the number elements in array\n");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    do
    {
        printf("1.Accept all the elements \n");
        printf("2.Display the elements \n");
        printf("3.Insert element in specific postion\n");
        printf("4.Delete element from the specfic postion\n");
        printf("Exit for other choices\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            accept(a, n);
            break;
        case 2:
            display(a, n);
            break;
        case 3:
            printf("Enter the position and element \n");
            scanf("%d %d", &pos, &ele);
            a = insertspecific(a, pos, ele, &n);
            break;
        case 4:
            printf("Enter the postion to delete the element\n");
            scanf("%d", &pos);
            n = deletedpecific(a, pos, n);
            break;
        default:
            printf("Exit\n");
            break;
        }
    } while (ch < 5);
}