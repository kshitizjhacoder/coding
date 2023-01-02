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
void s_transpose(S s1[10], S ts[10])
{
    ts[0].row = s1[0].col;
    ts[0].col = s1[0].row;
    ts[0].value = s1[0].value;
    int k = 1, i, j;
    for (i = 0; i < s1[0].col; i++)
    {
        for (j = 1; j <= s1[0].value; j++)
        {
            if (s1[j].col == i)
            {
                ts[k].row = s1[j].col;
                ts[k].col = s1[j].row;
                ts[k].value = s1[k].value;
                k++;
            }
        }
    }
}
void display(S s1[])
{
    int n = s1[0].row;
    int m = s1[0].col;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == s1[k].row && j == s1[k].col)
            {
                printf("%d ", s1[k].value);
                k++;
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    S s1[10], ts[10];
    int n, m;
    printf("Enter the row and columns\n");
    scanf("%d %d", &n, &m);
    accept(s1, n, m);
    display(s1);
    s_transpose(s1, ts);
    display(ts);
    return 0;
}