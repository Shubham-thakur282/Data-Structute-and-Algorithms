#include <iostream>
#include <queue>

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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int minVal(Node* root){
    if(root -> left == NULL){
        return root -> data;
    }
    return minVal(root -> left);
}

Node *deletion(Node *root, int val)
{

    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root -> left == NULL && root -> right != NULL){
            Node * temp = root -> right;
            delete root;
            return temp;
        }

        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        // 2 child
        if(root -> left != NULL && root -> right != NULL){
            int min = minVal(root -> right);
            root -> data = min;
            root -> right = deletion(root -> right, min);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletion(root->left, val);
        return root;
    }
    else
    {
        root->right = deletion(root->right, val);
        return root;
    }

    return root;
}

int main()
{
    Node *root = NULL;

    cout << "Enter data to create BST:- " << endl;
    takeInput(root);

    levelOrderTraversal(root);

    return 0;
}