#include<bits/stdc++.h>

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

void duplicates(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    unordered_set<int> seen;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete curr;
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev -> next;
    }
}

int main(){
    Node * head = new Node(4);
    head -> next = new Node(1);
    head -> next -> next = new Node(6);
    head -> next -> next ->next = new Node(3);
    head -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next = new Node(1);
    head -> next -> next -> next -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(7);


    duplicates(head);
    print(head);

    return 0;
}