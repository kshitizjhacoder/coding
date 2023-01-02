#include <bits/stdc++.h> //not solved
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
int maxpath(NODE root, int &ans)
{
    if (root == NULL)
        return 0;
    int left = maxpath(root->llink, ans);
    int right = maxpath(root->rlink, ans);
    int nodeMax = max(max(root->data, left + right + root->data), max(root->data + left, root->data + right));
    ans = max(ans, nodeMax);
    int singlePath = max(max(root->data + left, root->data + right), ans);
    return singlePath;
}
int maxsumpath(NODE root)
{
    int ans = INT_MIN;
    maxpath(root, ans);
    return ans;
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
    cout << "MAAAAAAAAAAAAAX sum is = " << maxsumpath(root) << endl;
}