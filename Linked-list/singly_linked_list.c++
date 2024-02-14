#include<iostream>
using namespace std;


class List{
    public:
        int data;
        List* next;

        // constructor
        List(int data){
            this -> data = data;
            this -> next = NULL;
        }

        // destructor
        ~List(){
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
void insertAtHead(List* &head ,int d){
    // create new node
    List* temp = new List(d);
    temp -> next = head; //point next pointer of the temp to the previous node
    head = temp; //change the head to the new node
}

// insert from tail/end
void insertAtTail(List* &tail,int d){
    List* temp = new List(d);//create new node
    tail -> next = temp; // point the previous node to new node
    tail = temp; //change the tail from previous to new node
}

// insert in middle
void insertAtPosition(List* &head,List* &tail,int position,int d){

    // this is case when we insert at starting / head
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }

    List* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    // inserting at tail
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return ;
    }

    List* newNode = new List(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;

}


// delete a node

void deleteNode(int position,List* &head,List* &tail){

    // deleting first / start node
    if(position == 1){
        List* temp = head;
        head = head -> next;
        //free the memory of the node
        temp -> next = NULL;
        delete temp;

    }else{
        //delete middle node or last node
        List* curr = head;
        List* prev = NULL;
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

void print(List* &head){
    List *temp = head;
    while(temp!=NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){

    List* node1 = new List(100);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    List* head = node1;
    List* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,14);  
    print(head);
    insertAtTail(tail,17);
    print(head);
    insertAtTail(tail,190);
    print(head);
    insertAtPosition(head,tail,3,71);
    print(head);
    insertAtPosition(head,tail,1,69);
    print(head);
    insertAtPosition(head,tail,8,32);
    print(head);
    deleteNode(8,head,tail);
    print(head);

    cout << "Head:- " << head -> data << endl; 
    cout << "Tail:- " << tail -> data << endl; 

    return 0;
}