#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d){
            this -> data = d;
            this -> prev = NULL;
            this -> next = NULL;
        }
};



// traversing a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// getting length of the linked list
int getlength(Node* &head){
    int len = 0;

    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

// insertion at head / start
void insertAtHead(Node* & head,int d){
    Node* temp = new Node(d);

    temp -> next  = head;
    head -> prev = temp;
    head = temp;

}

// insertion at tail / end
void insertAtTail(Node* & tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp; 
}

// insert at any position
void insertAtPosition(Node* &head,Node* &tail,int position, int d){
    // when position is at start / head
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }

    Node* curr = head;
    int count = 1;

    while(count < position-1){
        curr = curr -> next;
        count++;
    }

    // when position is at end / tail
    if(curr -> next == NULL){
        insertAtTail(tail,d);
        return ;
    }

    // when position is in between the list
    Node* newNode = new Node(d);
    newNode -> prev = curr;
    newNode -> next = curr -> next;
    curr -> next -> prev = newNode;
    curr -> next = newNode;

}

int main(){

    Node* node1 = new Node(21);

    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,19);
    print(head);
    insertAtTail(tail,18);
    print(head);
    insertAtTail(tail,17);
    print(head);
    insertAtPosition(head,tail,3,110);
    print(head);
    insertAtPosition(head,tail,7,11);
    print(head);
    insertAtPosition(head,tail,1,1);
    print(head);
    insertAtPosition(head,tail,4,5);
    print(head);


    cout << "Head:- " << head -> data << endl;
    cout << "Tail:- " << tail -> data << endl;
    cout << getlength(head) << endl;
    
    return 0;
}