#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *rlink;
    struct node *llink;
    node(int val)
    {
        data = val;
        rlink = NULL;
        llink = NULL;
    }
};
typedef struct node *NODE;
void flattening(NODE root)
{
    if (root == NULL)
        return;
    NODE left = root->llink;
    NODE right = root->rlink;
    root->llink = NULL;
    root->rlink = left;
    cout << root->data << " ";
    flattening(left);
    flattening(right);
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
    cout << endl;
    flattening(root);
}