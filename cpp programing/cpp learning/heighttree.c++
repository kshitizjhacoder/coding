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
int heightoftree(NODE root)
{
    if (root == NULL)
        return 0;
    return max(heightoftree(root->llink), heightoftree(root->rlink)) + 1;
}
int diameteroftree(NODE root) // optimise version we can use two parameters like root and pointer of height without using extra function
{
    if (root == NULL)
        return 0;
    int height = heightoftree(root->llink) + heightoftree(root->rlink) + 1;
    return max(height, max(diameteroftree(root->llink), diameteroftree(root->rlink)));
}
int main()
{
    NODE root = new node(1);
    root->llink = new node(2);
    root->rlink = new node(3);
    root->llink->llink = new node(4);
    root->llink->rlink = new node(5);
    root->rlink->llink = new node(6);
    root->rlink->llink->llink = new node(8);
    root->rlink->rlink = new node(7);
    cout << "height is = " << heightoftree(root) << endl;
    cout << "Diameter is = " << diameteroftree(root) << endl;
}