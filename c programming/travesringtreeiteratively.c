#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE x = (NODE)malloc(sizeof(struct node));
    if (x == NULL)
    {
        printf("Memory is not available\n");
        exit(0);
    }
    return x;
}
void push(NODE st[100], int *top, NODE elem)
{
    (*top)++;
    st[*top] = elem;
}
NODE pop(NODE st[100], int *top)
{
    NODE ret = st[*top];
    (*top)--;
    return ret;
}
NODE insert_BST(NODE root, int elem)
{
    NODE temp = getnode();
    temp->llink = temp->rlink = NULL;
    temp->info = elem;
    if (root == NULL)
        return temp;
    NODE curr = root, prev = NULL;
    while (curr != NULL)
    {
        prev = curr;
        if (curr->info > elem)
            curr = curr->llink;
        else
            curr = curr->rlink;
    }
    if (prev->info < elem)
        prev->rlink = temp;
    else
        prev->llink = temp;
    return root;
}
void preorder(NODE root)
{
    if (root == NULL)
        return;
    printf("%d ", root->info);
    preorder(root->llink);
    preorder(root->rlink);
}
void iterativepreordertraversal(NODE root)
{
    NODE curr = root;
    NODE st[100];
    int top = -1;
    while (1)
    {
        while (curr != NULL)
        {
            printf("%d ", curr->info);
            push(st, &top, curr);
            curr = curr->llink;
        }
        if (top == -1)
            break;
        while (curr == NULL)
        {
            curr = pop(st, &top);
            curr = curr->rlink;
        }
    }
}
int main()
{
    int n, elem;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    NODE root = NULL;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element \n");
        scanf("%d", &elem);
        root = insert_BST(root, elem);
    }
    preorder(root);
    printf("\n");
    iterativepreordertraversal(root);
}