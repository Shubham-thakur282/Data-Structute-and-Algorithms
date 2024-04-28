#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    // ~Node()
    // {
    //     int value = this->data;
    //     // memory free
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Memory is free for node with data:- " << value << endl;
    // }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *merge(Node *left, Node *right)
{
    if (left == NULL)
        return right;

    if (right == NULL)
        return left;

    Node *head = new Node(-1);
    Node *temp = head;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    while (left != NULL)
    {
        temp->next = left;
        left = left->next;
        temp = temp->next;
    }
    while (right != NULL)
    {
        temp->next = left;
        right = right->next;
        temp = temp->next;
    }
    return head->next;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // find mid and break into halvs
    Node *mid = findMid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    // recursive calls for both halvs
    left = mergeSort(left);
    right = mergeSort(right);
    // merge both halvs
    Node *result = merge(left, right);
    return result;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    // head -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(2);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(0);

    print(head);
    head = mergeSort(head);
    print(head);

    return 0;
}