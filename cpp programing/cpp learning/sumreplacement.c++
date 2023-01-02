#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
    node(int val)
    {
        data = val;
        llink = NULL;
        rlink = NULL;
    }
};
typedef struct node *NODE;
int sumreplacement(NODE root)
{
    if (root == NULL)
        return 0;
    if (root->llink == NULL && root->rlink == NULL)
        return root->data;
    root->data = root->data + sumreplacement(root->llink) + sumreplacement(root->rlink);
    return root->data;
}
void preorder(NODE root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->llink);
    preorder(root->rlink);
}
int main()
{
    NODE root = new node(1);
    root->llink = new node(2);
    root->rlink = new node(3);
    root->llink->llink = new node(4);
    root->llink->rlink = new node(5);
    root->rlink->llink = new node(6);
    root->rlink->rlink = new node(7);
    preorder(root);
    cout << "last node vallue is = " << sumreplacement(root) << endl;
    preorder(root);
}