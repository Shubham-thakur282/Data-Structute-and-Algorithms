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

void reverseLevelOrderTraversal(Node* root){
    queue<Node*> q;
    stack<Node*> s;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        s.push(temp);
        if(temp == NULL){
            if(!q.empty()){
                q.push(NULL);
            }
            continue;
        }

        if(temp -> right){
            q.push(temp -> right);
        }
        if(temp -> left){
            q.push(temp -> left);
        }

    }

    while(!s.empty()){
        Node* temp = s.top();
        s.pop();
        if(temp == NULL){
            cout << endl;
            continue;
        }

        cout << temp -> data <<" ";
        
    }
    

}

int main()
{
    Node *root = NULL;

    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Printing the level order traversal output: " << endl;
    levelOrderTraversal(root);

    cout << endl;
    cout << "Printing the reverse level order traversal output: " << endl;
    reverseLevelOrderTraversal(root);

    return 0;
}