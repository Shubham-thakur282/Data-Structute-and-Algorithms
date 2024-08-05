#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *solve(vector<int> &preorder, int mini, int maxi, int &i)
{
    if (i >= preorder.size())
    {
        return NULL;
    }

    if (preorder[i] < mini || preorder[i] > maxi)
    {
        return NULL;
    }

    Node *root = new Node(preorder[i++]);
    root->left = solve(preorder, mini, root -> data, i);
    root->right = solve(preorder, root -> data, maxi, i);

    return root;
}

Node *preoderToBST(vector<int> &preorder)
{
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solve(preorder, mini, maxi, i);
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{

    vector<int> preorder = {20, 10, 5, 15, 13, 35, 30, 42};
    int i = 0;
    Node *root = solve(preorder,INT_MIN,INT_MAX,i);
    cout << endl;
    inorder(root);

    return 0;
}