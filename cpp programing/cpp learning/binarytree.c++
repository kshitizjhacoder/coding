#include <bits\stdc++.h>
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

// accepting node structure of tree
// void accept(NODE root, int elem, char arrow)
// {
//     NODE temp = new node(elem);
//     if (arrow == '<')
//     {
//         root->llink = temp;
//         return;
//     }
//     if (arrow == '>')
//         root->rlink = temp;
// }

// preorder
void preorder(NODE root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->llink);
    preorder(root->rlink);
}
// inorder
void inorder(NODE root)
{
    if (root == NULL)
        return;
    inorder(root->llink);
    cout << root->data << " ";
    inorder(root->rlink);
}
// postorder
void postorder(NODE root)
{
    if (root == NULL)
        return;
    postorder(root->llink);
    postorder(root->rlink);
    cout << root->data << " ";
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
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
}