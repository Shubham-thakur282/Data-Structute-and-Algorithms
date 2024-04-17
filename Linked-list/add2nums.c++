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

Node * addTwoNums(Node* head1, Node * head2){
    Node * newHead = new Node(-1);
    Node * temp = newHead;
    int carry = 0;

    while(head1 != NULL && head2 != NULL){
        int digit = head1 -> data + head2 -> data + carry;
        carry = digit / 10;
        digit = digit % 10;
        cout << carry << endl;
        
        temp -> next = new Node(digit);
        temp = temp -> next;
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    while(head1 != NULL){
        int digit = head1 -> data + carry;
        carry = digit / 10;
        digit = digit % 10;
        temp -> next = new Node(digit);
        temp = temp -> next;
        head1 = head1 -> next;
    }

    while(head2 != NULL){
        int digit = head2 -> data + carry;
        carry = digit / 10;
        digit = digit % 10;
        temp -> next = new Node(digit);
        temp = temp -> next;
        head2 = head2 -> next;
    }

    if(carry > 0){
        temp -> next = new Node(carry);
    }

    return newHead -> next;
}

int main()
{
    Node *head1 = new Node(9);
    head1->next = new Node(2);
    head1->next->next = new Node(1);
    head1 -> next -> next ->next = new Node(2);
    head1 -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next = new Node(0);
    // head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(1);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(2);
    // head -> next -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(0);

    // duplicates(head);
    print(head1);

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head -> next -> next ->next = new Node(2);
    head -> next -> next -> next -> next = new Node(1);
    print(head);

    head = addTwoNums(head1,head);
    print(head);
    

    return 0;
}