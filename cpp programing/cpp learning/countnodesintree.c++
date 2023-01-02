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
int countnode(NODE root)
{
    if (root == NULL)
        return 0;
    return countnode(root->llink) + countnode(root->rlink) + 1;
}
int sumnode(NODE root)
{
    if (root == NULL)
        return 0;
    return root->data + sumnode(root->llink) + sumnode(root->rlink);
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
    cout << "Number of nodes " << countnode(root) << endl;
    cout << "Sum is = " << sumnode(root) << endl;
}