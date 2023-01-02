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
bool getpath(NODE root, int key, vector<int> &path)
{
    if (root == NULL)
        return false;
    path.push_back(root->data);
    if (root->data == key)
        return true;
    if (getpath(root->llink, key, path) || getpath(root->rlink, key, path))
        return true;
    path.pop_back();
    return false;
}
int lca(NODE root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getpath(root, n1, path1) || !getpath(root, n2, path2))
        return -1;
    int pc;
    for (pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
            break;
    }
    return path1[pc - 1];
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
    int lca_1 = lca(root, 6, 7);
    if (lca_1 != -1)
        cout << "path change is = " << lca_1 << endl;
    else
        cout << "not possible" << endl;
}