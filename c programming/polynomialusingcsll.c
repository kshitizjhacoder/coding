#include <stdio.h>
#include <stdlib.h>
struct poly
{
    int cf, px, py, pz;
    struct node *link;
};
typedef struct poly *P;
P getnode()
{
    P x;
    x = (P)malloc(sizeof(struct poly));
    if (x == NULL)
    {
        printf("Memory not available\n");
        exit(0);
    }
    return x;
}
void read_poly(P p, int n)
{
    P temp;
    for (int i = 0; i < n; i++)
    {
        temp = getnode();
        printf("Enter the coefficient and powers of x,y,z and for %d. ", i + 1);
        scanf("%d %d %d %d", &(temp->cf), &(temp->px), &(temp->py), &(temp->pz));
        temp->link = p->link;
        p->link = temp;
    }
}
P compare(P term, P p2)
{
    P curr;
    curr = p2->link;
    while (curr != p2)
    {
        if (term->px == curr->px && term->py == curr->py && term->pz == curr->pz)
            return curr;
        curr = curr->link;
    }
    return NULL;
}
void insert(P p3, int cf, int px, int py, int pz)
{
    P temp = getnode();
    P next;
    temp->cf = cf;
    temp->px = px;
    temp->py = py;
    temp->pz = pz;
    temp->link = p3->link;
    p3->link = temp;
}
void add_poly(P p1, P p2, P p3)
{
    P curr, res_pos;
    curr = p1->link;
    while (curr != p1)
    {
        res_pos = compare(curr, p2);
        if (res_pos != NULL)
        {
            insert(p3, curr->cf + res_pos->cf, curr->px, curr->py, curr->pz);
            res_pos->cf = -999;
        }
        else
            insert(p3, curr->cf, curr->px, curr->py, curr->pz);
        curr = curr->link;
    }
    curr = p2->link;
    while (curr != p2)
    {
        if (curr->cf != -999)
            insert(p3, curr->cf, curr->px, curr->py, curr->pz);
        curr = curr->link;
    }
}
void display(P head)
{
    P curr = head->link;
    while (curr != head)
    {
        if (curr->cf > 0)
            printf("+%dx^%dx^%dx^%d", curr->cf, curr->px, curr->py, curr->pz);
        else
            printf("%dx^%dy^%dz^%d", curr->cf, curr->px, curr->py, curr->pz);
        curr = curr->link;
    }
    printf("\n");
}
int main()
{
    P p1, p2, p3;
    int n, m;
    p1 = getnode();
    p2 = getnode();
    p3 = getnode();
    p1->link = p1;
    p2->link = p2;
    p3->link = p3;
    printf("Enter the number of elements in 1st polynomial\n");
    scanf("%d", &n);
    printf("Elements in first elements are : \n");
    read_poly(p1, n);
    display(p1);
    printf("Enter the number of elements present in 2nd polynomial\n");
    scanf("%d", &m);
    printf("Elements in second elements are : \n");
    read_poly(p2, m);
    display(p2);
    add_poly(p1, p2, p3);
    printf("\n additional number \n");
    display(p3);
    return 0;
}