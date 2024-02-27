#include<iostream>
#include<map>
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
    if(tail == NULL){
        cout << "List is empty \n";
        return ;
    }
    do
    {
        cout << temp -> data <<" ";
        temp = temp -> next;

    } while (temp != tail);
    cout << endl;
    
}

void deleteNode(Node * &tail,int val){
    // empty list
    if(tail == NULL){
        cout << "List is empty" << endl;
    }
    else{
        Node * prev = tail;
        Node * curr = tail -> next;

        if(curr == prev){
            tail = NULL;
            curr -> next = NULL;
            delete curr;
            return ;
        }

        while(curr -> data != val && curr->next !=tail){
            prev = curr;
            curr = curr -> next;
            // if(curr -> next == tail){
            //     cout << "Element Not Found!" << endl;
            //     return ;
            // }
        }

        if(curr -> data !=val){
            cout << val << " is not present in the list " << endl;
            return ;
        }

        if(curr == prev){
            tail = NULL;
        }

        if(curr == tail){
            tail = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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

bool detectLoop(Node* head)
{
    if(head == NULL){
        return 1;
    }
    Node * temp = head -> next;
    map<Node*,bool> visited;
    while(temp != NULL){
        if(visited[temp] == true)
            return 1;

        visited[temp] = true;

        if(temp == head)
            return 1;
        temp = temp -> next;
    }

    return 0;

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
    

    // deleteNode(tail,30);
    // print(tail);

    if(detectLoop(tail)){
        cout << "Linked list is circular!" << endl;
    }
    

    cout << "Tail:- " << tail -> data << endl;

    return 0;
}