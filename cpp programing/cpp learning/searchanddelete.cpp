#include <bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
    node(int val)
    {
        info = val;
        llink = NULL;
        rlink = NULL;
    }
};
typedef struct node *NODE;
NODE insertBST(NODE root, int elem)
{
    NODE temp = new node(elem);
    if (root == NULL)
        return temp;
    NODE curr = temp, prev = NULL;
    while (curr != NULL)
    {
        prev = curr;
        if (curr->info > elem)
            curr = curr->llink;
        else
            curr = curr->rlink;
    }
    if (prev->info > elem)
        prev->llink = temp;
    else
        prev->rlink;
    free(temp);
    return root;
}
void preorder(NODE root)
{
    if (root == NULL)
        return;
    cout << root->info << " ";
    preorder(root->llink);
    preorder(root->rlink);
}
int main()
{
    NODE root;
    int elem, n;
    printf("Enter the size \n");
    cin >> n;
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        root = insertBST(root, elem);
    }
    preorder(root);
}