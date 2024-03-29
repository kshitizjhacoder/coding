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
void printlevel(NODE root)
{
    if (root == NULL)
        return;
    queue<NODE> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        NODE curr = q.front();
        q.pop();
        if (curr != NULL)
        {
            cout << curr->data << " ";
            if (curr->llink)
                q.push(curr->llink);
            if (curr->rlink)
                q.push(curr->rlink);
        }
        else if (!q.empty())
            q.push(NULL);
    }
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
    printlevel(root);
}