#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct header
{
    int indexvalue;
    struct header *down;
    struct header *right;
};
typedef struct header *HEAD;
struct element
{
    int row;
    int col;
    int value;
    struct element *down;
    struct element *right;
};
typedef struct element *ELE;
ELE getnode()
{
    ELE x = (ELE)malloc(sizeof(struct element));
    if (x == NULL)
    {
        printf("memory not available\n");
        exit(0);
    }
    return x;
}
HEAD getnode_1()
{
    HEAD x = (HEAD)malloc(sizeof(struct header));
    if (x == NULL)
    {
        printf("MEmory not availbale\n");
        exit(0);
    }
    return x;
}
void accept(HEAD hr, HEAD ht, int i, int j)
{
    ELE rr = hr->right;
    ELE dow = ht->down;
    ELE prevrr, prevdow;
    ELE temp = getnode();
    scanf("%d", &(temp->value));
    if (temp->value)
    {
        temp->row = i;
        temp->col = j;
        temp->down = ht;
        temp->right = hr;
        count++;
        while (rr != hr)
        {
            prevrr = rr;
            rr = rr->right;
        }
        while (dow != ht)
        {
            prevdow = dow;
            dow = dow->down;
        }
        prevdow->down = temp;
        prevrr->right = temp;
    }
}
int main()
{
    int i, j, n, m;
    printf("Enter the row and column");
    scanf("%d %d", &n, &m);
    ELE h0 = getnode();
    HEAD ht = h0->down;
    HEAD hr = h0->right;
    HEAD curr;
    h0->right = curr = h0;
    for (j = 0; j < m; j++)
    {
        HEAD temp = getnode_1();
        temp->indexvalue = j;
        curr->right = temp;
        temp->right = h0;
    }
    h0->down = curr = h0;
    for (i = 0; i < n; i++)
    {
        HEAD temp = getnode_1();
        temp->indexvalue = i;
        curr->down = temp;
        temp->down = h0;
    }
    free(curr);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            accept(hr, ht, i, j);
            hr = hr->right;
        }
        ht = ht->down;
    }
}