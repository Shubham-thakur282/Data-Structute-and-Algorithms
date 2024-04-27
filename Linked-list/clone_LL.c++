#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *random;

    // constructor
    Node()
    {
        this->next = NULL;
        this->random = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
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

Node *clone(Node *head)
{

    Node *newHead = new Node(0);
    Node *temp1 = newHead;
    Node *temp = head;
    unordered_map<Node *, Node *> umap;

    while (temp != NULL)
    {
        temp1->next = new Node(temp->data);
        umap[temp] = temp1->next;
        temp1 = temp1->next;
        temp = temp->next;
    }

    temp = head;
    temp1 = newHead->next;
    Node *random = NULL;
    while (temp != NULL)
    {
        random = umap[temp->random];
        temp1->random = random;
        temp = temp->next;
        temp1 = temp1->next;
    }

    temp1 = newHead->next;
    while (temp1 != NULL)
    {
        cout << temp1->random->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    return newHead->next;
}

Node *clone2(Node *head)
{

    Node *newHead = new Node(0);
    Node *temp1 = newHead;
    Node *temp = head;

    while (temp != NULL)
    {
        temp1->next = new Node(temp->data);
        temp1 = temp1->next;
        temp = temp->next;
    }
    newHead = newHead->next;
    temp = head;
    temp1 = newHead;

    while (temp != NULL && temp1 != NULL)
    {
        Node *forward = temp->next;
        Node *forward1 = temp1->next;

        temp->next = temp1;
        temp1->next = forward;
        temp = forward;
        temp1 = forward1;
    }
    print(head);
    temp = head;
    temp1 = newHead;
    while (temp1 != NULL)
    {
        temp1->random = temp->random->next;
        temp = temp->next->next;
        cout << "A"
             << " ";
        if(temp -> next  != NULL)
            temp1 = temp1->next->next;
    }
    temp = head;
    cout << endl;
    while(temp != NULL){
        cout << temp -> random -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
    cout << "here\n";
    print(head);
    temp1 = newHead;
    while (temp1 -> next != NULL)
    {
        temp1->next = temp1->next->next;
        cout << temp1->data << " ";
        temp = temp->next;
    }
    return newHead;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    // head -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(2);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(0);

    // duplicates(head);
    print(head);

    // Node *head = new Node(0);
    head->random = head->next->next;
    head->next->random = head->next->next->next;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next;
    head->next->next->next->next->random = head->next->next;
    // head -> next -> next -> next -> next = ;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->random->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // print(head);
    head = clone2(head);
    print(head);

    return 0;
}