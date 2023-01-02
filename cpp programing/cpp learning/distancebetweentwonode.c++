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
NODE LCA(NODE root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    NODE left = LCA(root->llink, n1, n2);
    NODE right = LCA(root->rlink, n1, n2);
    if (left != NULL && right != NULL)
        return root;
    if (left == NULL && right == NULL)
        return NULL;
    if (left != NULL)
        return LCA(root->llink, n1, n2);
    return LCA(root->rlink, n1, n2);
}
int finddist(NODE root, int key, int dist)
{
    if (root == NULL)
        return -1;
    if (root->data == key)
        return dist;
    int left = finddist(root->llink, key, dist + 1);
    if (left != -1)
        return left;
    return finddist(root->rlink, key, dist + 1);
}
int distancebetween(NODE root, int n1, int n2)
{
    NODE lca = LCA(root, n1, n2);
    int d1 = finddist(root, n1, 0);
    int d2 = finddist(root, n2, 0);
    return d1 + d2;
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
    cout << "The distance between = " << distancebetween(root, 5, 7) << endl;
}