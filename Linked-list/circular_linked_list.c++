#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this -> data = d;
        }

        // Node(int d, Node * next){
        //     this -> data = d;
        //     this -> next = next;
        // }

        ~Node(){
            int val = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory is free for the node with value :- " << val << endl;
        }

};

void insertNode(Node * &tail, int element,int d){
    // if list is empty
    if(tail == NULL){
        Node * temp = new Node(d);
        temp -> next = temp;
        tail = temp;
        return ;
    }
    else{
        // if list is not empty
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void print(Node * &tail){
    Node* temp = tail;
    do
    {
        cout << temp -> data <<" ";
        temp = temp -> next;

    } while (temp != tail);
    cout << endl;
    
}

int main(){

    // Node * node1 = new Node(10);
    Node * tail = NULL;
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,10);
    print(tail);
    insertNode(tail,5,20);
    print(tail);
    insertNode(tail,20,40);
    print(tail);

    cout << "Tail:- " << tail -> data << endl;

    return 0;
}