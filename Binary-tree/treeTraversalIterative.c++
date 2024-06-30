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
    stack<Node*> s;
    Node* current = root;

    while(current != NULL || !s.empty()){
        while(current != NULL){
            s.push(current);
            current = current -> left;
        }
        current = s.top();
        s.pop();
        cout << current -> data << " ";
        current = current -> right;
    }

    // if (root->left)
    // {
    //     inorderTraversal(root->left);
    // }
    // cout << root->data << " ";

    // if (root->right)
    // {
    //     inorderTraversal(root->right);
    // }
}

void preorderTraversal(Node *root)
{
    // NLR
    stack<Node*> s;
    s.push(root);
    

    while(!s.empty()){
        Node* current = s.top();
        s.pop();
        cout << current -> data << " ";
        
        if(current -> right){
            s.push(current -> right);
        }
        if(current -> left){
            s.push(current -> left);
        }
        

    }


    // cout << root->data << " ";
    // if (root->left)
    // {
    //     preorderTraversal(root->left);
    // }

    // if (root->right)
    // {
    //     preorderTraversal(root->right);
    // }
}

void postorderTraversal(Node *root)
{
    // LRN
    stack<Node*> s1,s2;
    s1.push(root);

    while(!s1.empty()){
        Node* current = s1.top();
        s1.pop();
        s2.push(current);

        if(current ->left){
            s1.push(current -> left);
        }

        if(current -> right){
            s1.push(current -> right);
        }

    }

    while(!s2.empty()){
        Node* curr = s2.top();
        s2.pop();
        cout << curr -> data << " ";
    }

    // if (root->left)
    // {
    //     postorderTraversal(root->left);
    // }

    // if (root->right)
    // {
    //     postorderTraversal(root->right);
    // }
    // cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Inorder Traversal:- " << endl;
    inorderTraversal(root);
    //7 3 11 1 17 5

    cout << endl;

    cout << "Preorder Traversal:- " << endl;
    preorderTraversal(root);
    //1 3 7 11 5 17

    cout << endl;
    
    cout << "Postorder Traversal:- " << endl;
    postorderTraversal(root);
    //7 11 3 17 5 1

    return 0;
}