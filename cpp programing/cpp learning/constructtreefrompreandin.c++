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
int search_pos(int inorder[], int root, int start, int end)
{
    for (int j = start; j <= end; j++)
    {
        if (root == inorder[j])
        {
            return j;
        }
    }
}
NODE builttree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
        return NULL;
    int curr = preorder[idx];
    idx++;
    NODE temp = new node(curr);
    int pos = search_pos(inorder, curr, start, end);
    temp->llink = builttree(preorder, inorder, start, pos - 1);
    temp->rlink = builttree(preorder, inorder, pos + 1, end);
}
void inorderprint(NODE root)
{
    if (root == NULL)
        return;
    inorderprint(root->llink);
    cout << root->data << " ";
    inorderprint(root->rlink);
}
int main()
{
    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};
    NODE root = builttree(preorder, inorder, 0, 6);
    inorderprint(root);
}