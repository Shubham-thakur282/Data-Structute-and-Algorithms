#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void inorderTraversal(Node *root)
{
    // LNR

    if (root->left)
    {
        inorderTraversal(root->left);
    }
    cout << root->data << " ";

    if (root->right)
    {
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node *root)
{
    // NLR
    cout << root->data << " ";
    if (root->left)
    {
        preorderTraversal(root->left);
    }

    if (root->right)
    {
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node *root)
{
    // LRN
    if (root->left)
    {
        postorderTraversal(root->left);
    }

    if (root->right)
    {
        postorderTraversal(root->right);
    }
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Inorder Traversal:- " << endl;
    inorderTraversal(root);

    cout << endl;

    cout << "Preorder Traversal:- " << endl;
    preorderTraversal(root);

    cout << endl;
    
    cout << "Postorder Traversal:- " << endl;
    postorderTraversal(root);

    return 0;
}