#include <stdio.h>
#include <stdlib.h>
typedef struct matrix
{
    /* data */
    int row;
    int col;
    int value;
} S;

S *accept(S s1[], int row, int col);
void display(S s1[]);
int main()
{
    S *s1;
    int row, col;
    printf("Enter the number of row and column\n");
    scanf("%d %d", &row, &col);
    s1 = (S *)malloc(sizeof(S) * row);
    s1 = accept(s1, row, col);
    display(s1);
    return 0;
}
S *accept(S s1[], int row, int col)
{
    int i, j, k = 1, elem;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element of %d row and %d col\n", i, j);
            scanf("%d", &elem);
            if (elem != 0)
            {
                s1[k].row = i;
                s1[k].col = j;
                s1[k].value = elem;
                k++;
            }
            if (k == row)
                s1 = (S *)realloc(s1, sizeof(S) * (k * 2));
        }
    }
    s1[0].row = row;
    s1[0].col = col;
    s1[0].value = k - 1;
    return s1;
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