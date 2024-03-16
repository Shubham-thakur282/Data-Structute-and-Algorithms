#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        // constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        // destructor
        ~Node(){
            int value = this -> data;
            // memory free
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory is free for node with data:- " << value << endl;
        }

};


// insert from head/start
void insertAtHead(Node* &head ,Node* & tail,int d){
    // create new node
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
    Node* temp = new Node(d);
    temp -> next = head; //point next pointer of the temp to the previous node
    head = temp; //change the head to the new node
    }
}

// insert from tail/end
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{

    Node* temp = new Node(d);//create new node
    tail -> next = temp; // point the previous node to new node
    tail = temp; //change the tail from previous to new node
    }
}

// insert in middle
void insertAtPosition(Node* &head,Node* &tail,int position,int d){

    // this is case when we insert at starting / head
    if(position == 1){
        insertAtHead(head,tail,d);
        return ;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    // inserting at tail
    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return ;
    }

    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;

}


// delete a node

void deleteNode(int position,Node* &head,Node* &tail){

    // deleting first / start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //free the memory of the node
        temp -> next = NULL;
        delete temp;

    }else{
        //delete middle node or last node
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
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}

void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}


bool checkCircular(Node* head)
{
    if(head == NULL){
        return 1;
    }
    Node * temp = head -> next;
    while(temp != NULL){
        if(temp == head)
            return 1;
        temp = temp -> next;
    }

    return 0;

}

Node* removeDuplicate(Node *& head){
    
    if(head == NULL || head -> next == NULL)
        return head;

    
    Node* curr = head -> next;
    Node* prev = head;

    while(curr != NULL){
        if(curr -> data == prev -> data){
            Node * temp = curr;
            curr = curr -> next;
            prev -> next = curr;
            temp -> next = NULL;
            delete temp;
        }else{
            prev = curr;
            curr = curr -> next;
        }
    }
    return head;
}


int main(){

    // Node* node1 = new Node(100);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    insertAtTail(tail,head,1);
    print(head);
    insertAtTail(tail,head,2);  
    print(head);
    insertAtTail(tail,head,3);
    print(head);
    insertAtTail(tail,head,3);
    print(head);
    // insertAtPosition(head,tail,3,71);
    insertAtTail(tail,head,4);
    print(head);
    // insertAtPosition(head,tail,1,69);
    insertAtTail(tail,head,4);
    print(head);
    // insertAtPosition(head,tail,7,32);
    insertAtTail(tail,head,5);
    print(head);
    // deleteNode(7,head,tail);
    // print(head);

    // if(checkCircular(tail)){
    //     cout << "Linked list is circular!" << endl;
    // }else{
    //     cout << "Linked list is not circular!" << endl;
    // }

    cout << "Head:- " << head -> data << endl; 
    cout << "Tail:- " << tail -> data << endl; 

    head = removeDuplicate(head);
    print(head);

    return 0;
}