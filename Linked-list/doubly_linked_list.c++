#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }

        if(this -> prev != NULL){
            delete prev;
            this -> prev = NULL;
        }

        cout << "Memory is free for node with data:- " << value << endl;
    }

};

// traversing a linked list
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

// getting length of the linked list
int getlength(Node *&head)
{
    int len = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

// insertion at head / start
void insertAtHead(Node *&head, Node *&tail, int d)
{

    if (head == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insertion at tail / end
void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at any position
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // when position is at start / head
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *curr = head;
    int count = 1;

    while (count < position - 1)
    {
        curr = curr->next;
        count++;
    }

    // when position is at end / tail
    if (curr->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // when position is in between the list
    Node *newNode = new Node(d);
    newNode->prev = curr;
    newNode->next = curr->next;
    curr->next->prev = newNode;
    curr->next = newNode;
}

void deleteNode(int position,Node* &head,Node* &tail){
    if(position == 1){
        Node * temp = head;
        head = temp -> next;
        temp -> next -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++; 
        }

        if(curr -> next == NULL){
            tail = prev;
            prev -> next = NULL;
            curr -> next = NULL;
            curr -> prev = NULL;
            delete curr;
            return ;
        }
        prev -> next = curr -> next;
        curr -> next -> prev = curr -> prev;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;
    }
}

int main()
{

    // Node* node1 = new Node(21);
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    insertAtTail(tail, head, 20);
    print(head);
    insertAtTail(tail, head, 19);
    print(head);
    insertAtTail(tail, head, 18);
    print(head);
    insertAtTail(tail, head, 17);
    print(head);
    insertAtPosition(head, tail, 3, 110);
    print(head);
    insertAtPosition(head, tail, 6, 11);
    print(head);
    insertAtPosition(head, tail, 1, 1);
    print(head);
    insertAtPosition(head, tail, 4, 5);
    print(head);
    deleteNode(1,head,tail);
    print(head);

    cout << "Head:- " << head->data << endl;
    cout << "Tail:- " << tail->data << endl;
    cout << getlength(head) << endl;

    return 0;
}