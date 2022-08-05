//binary search tree with insert and search by value

#include <iostream>
using namespace std;
struct bstnode
{
    int data;
    bstnode *left, *right;
};
bstnode *root = NULL;
bstnode *newnode(int data)
{
    bstnode *node = new bstnode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
        root = newnode(data);
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);
    return root;
}
bool search(bstnode *head, int d)
{
    if (head->data == d)
        return true;
    else if (head->right == NULL && head->left == NULL)
        return false;
    else if (d < head->data)
        return search(head->left, d);
    else
        return search(head->right, d);
}
void print(bstnode *root)
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
    int d, n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        root = insert(root, d);
    }
    print(root);
    cout << endl;
    int a;
    cin >> a;
    if (search(root, a))
        cout << "yes";
    else
        cout << "no";
    return 0;
}

//binary search tree, find max and min elements, height of tree

#include <iostream>
using namespace std;
struct bstnode
{
    int data;
    bstnode *left, *right;
};
bstnode *root = NULL;
bstnode *newnode(int data)
{
    bstnode *node = new bstnode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
        root = newnode(data);
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);
    return root;
}
void maxmin(bstnode *root)
{
    bstnode *a = root;
    while (a->left != NULL)
    {
        a = a->left;
    }
    cout << "Min is =" << a->data << endl;
    a = root;
    while (a->right != NULL)
    {
        a = a->right;
    }
    cout << "Max is =" << a->data << endl;
}
int height(bstnode *root)
{
    if (root == NULL)
    {
        return -1;
    }
    return max(height(root->left), height(root->right)) + 1;
}
void print(bstnode *root)
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
    int d, n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        root = insert(root, d);
    }
    print(root);
    cout << endl;
    maxmin(root);

    int h = height(root);
    cout << h;

    return 0;
}

// level order and depth order algorithms
// depth order - preorder(DLR), inorder(LDR)(also used for sorting), postorder(LRD)

#include <iostream>
#include <queue>
using namespace std;
struct bstnode
{
    int data;
    bstnode *left, *right;
};
bstnode *root = NULL;
bstnode *newnode(int data)
{
    bstnode *node = new bstnode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
        root = newnode(data);
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);
    return root;
}

void preorder(bstnode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(bstnode *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(bstnode *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelorder(bstnode *root)
{
    if (root == NULL)
        return;
    queue<bstnode *> s;
    s.push(root);
    while (!s.empty())
    {
        bstnode *cur = s.front();
        cout << cur->data << " ";
        if (cur->left != NULL)
            s.push(cur->left);
        if (cur->right != NULL)
            s.push(cur->right);
        s.pop();
    }
}
int main()
{
    int d, n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        root = insert(root, d);
    }
    cout << "Level: ";
    levelorder(root);
    cout << endl
         << "Pre: ";
    preorder(root);
    cout << endl
         << "In: ";
    inorder(root);
    cout << endl
         << "Post: ";
    postorder(root);

    return 0;
}

//algo to check if tree is a BST

#include <iostream>
#include <queue>
using namespace std;
struct bstnode
{
    int data;
    bstnode *left, *right;
};
bstnode *root = NULL;
bstnode *newnode(int data)
{
    bstnode *node = new bstnode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
        root = newnode(data);
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);
    return root;
}
bool check(bstnode *root, int max, int min)
{
    if (root == NULL)
        return true;
    if (root->data <= max && root->data > min && check(root->left, root->data, min) && check(root->right, max, root->data))
        return true;
    else
        return false;
}

bool isbst(bstnode *root)
{
    return check(root, INT32_MAX, INT32_MIN);
}

int main()
{
    int d, n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        root = insert(root, d);
    }
    if (isbst(root))
        cout << "IS BST";
    else
        cout << "NOT BST";

    return 0;
}

// delete a node in a bst

#include <iostream>
#include <queue>
using namespace std;
struct bstnode
{
    int data;
    bstnode *left, *right;
};
bstnode *root = NULL;
bstnode *newnode(int data)
{
    bstnode *node = new bstnode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
        root = newnode(data);
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);
    return root;
}
bstnode *findmin(bstnode *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

bstnode *del(bstnode *root, int data)
{
    if (root == NULL)
        return root;
    else if (root->data > data)
        root->left = del(root->left, data);
    else if (root->data < data)
        root->right = del(root->right, data);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            bstnode *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            bstnode *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            bstnode *min = findmin(root->right);
            root->data = min->data;
            root->right = del(root->right, min->data);
        }
        return root;
    }
}
void print(bstnode *root)
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
    int d, n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        root = insert(root, d);
    }
    int x;
    cin >> x;
    print(root);
    root = del(root, x);
    cout << endl;
    print(root);
    return 0;
}