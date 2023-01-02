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
void subtreelevel(NODE root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << " ";
    subtreelevel(root->llink, k - 1);
    subtreelevel(root->rlink, k);
}
int ancestorsubtree(NODE root, NODE target, int k)
{
    if (root == NULL)
        return -1;
    if (root == target)
    {
        subtreelevel(root, k);
        return 0;
    }
    int dl = ancestorsubtree(root->llink, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
            cout << root->data << " ";
        else
        {
            subtreelevel(root->rlink, k - dl - 2);
        }
    }
    int dr = ancestorsubtree(root->rlink, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
            cout << root->data << " ";
        else
            subtreelevel(root->llink, k - dr - 2);
    }
}
int main()
{
    NODE root = new node(1);
    root->llink = new node(5);
    root->llink->llink = new node(3);
    root->llink->rlink = new node(4);
    root->llink->llink->llink = new node(6);
    root->llink->llink->rlink = new node(7);
    root->llink->llink->rlink->llink = new node(8);
    root->llink->llink->rlink->rlink = new node(9);
    root->llink->llink->llink->llink = new node(10);
    root->rlink = new node(11);
    root->rlink->llink = new node(12);
    root->rlink->rlink = new node(13);
    root->rlink->rlink->llink = new node(15);
    root->rlink->rlink->rlink = new node(14);
    subtreelevel(root->llink, 3);
    ancestorsubtree(root, root->llink, 3);
}
