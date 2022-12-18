#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *root = NULL;

node *newnode(int d)
{
    node *ptr = new node();
    ptr->data = d;
    ptr->right = NULL;
    ptr->right = NULL;
    return ptr;
}

node *insert(node *root, int d)
{
    if (root == NULL)
    {
        root = newnode(d);
    }
    else if (d <= root->data)
        root->left = insert(root->left, d);
    else
        root->right = insert(root->right, d);
    return root;
}

void find(node *root, int d)
{
    bool ans = false;
    if (d == root->data)
    {
        ans = true;
    }
    else if (d <= root->data)
    {
        find(root->left, d);
    }
    else
        find(root->right, d);
    cout << endl
         << ans;
}
void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    int t, d;
    cin >> t;
    while (t--)
    {
        cin >> d;
        root = insert(root, d);
    }
    print(root);
    int d;
    cout << endl;
    cin >> d;
    find(root, d);
    return 0;
}