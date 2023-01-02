#include <stdio.h>
#include <stdlib.h>

typedef struct sparse
{
    int row;
    int col;
    int value;
} S;
void accept(S s1[], int n, int m)
{
    int i, j, k = 1, ele;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Element for row %d and col number %d\n", i, j);
            scanf("%d", &ele);
            if (ele != 0)
            {
                s1[k].row = i;
                s1[k].col = j;
                s1[k].value = ele;
                k++;
            }
        }
    }
    s1[0].row = n;
    s1[0].col = m;
    s1[0].value = k - 1;
}
void display(S s1[])
{
    int n = s1[0].row;
    int m = s1[0].col;
    int val = s1[0].value;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            k = 1;
            while (k < val + 1)
            {
                if (i == s1[k].col && j == s1[k].row)
                {
                    printf("%d ", s1[k].value);
                    break;
                }
                k++;
            }
            if (k == val + 1)
                printf("0 ");
        }

        printf("\n");
    }
}
/*void transpose(S s1[])
{
    int n = s1[0].row;
    int m = s1[0].col;
    int temp, i, k = 1;
    for (i = 0; i < n; k++, i++)
    {

        temp = s1[k].row;
        s1[k].row = s1[k].col;
        s1[k].col = temp;
    }
}*/
int main()
{
    S s1[20];
    int n, m;
    printf("Enter the row and columns\n");
    scanf("%d %d", &n, &m);
    accept(s1, n, m);
    display(s1);
    // transpose(s1);
    // display(s1);
    return 0;
}