#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(){
            this -> next = NULL;
        }

        Node(int element){
            this -> next = NULL;
            this -> data = element;
        }
};

class queue{
    public:
        Node *front;
        Node *rear;

        queue(){
            front = NULL;
            rear = NULL;
        }

        void enqueue(int element){
            Node * temp = new Node(element);

            if(rear == NULL){
                front = rear = temp;
                return ;
            }

            rear -> next = temp;
            rear = rear -> next;

        }

        void dequeue(){
            if(front == NULL){
                cout << "Queue is empty" << endl;
                return ;
            }

            Node * temp = front;
            front = front -> next;
            
            if(front == NULL)
                rear = NULL;

            delete temp;
        }

        int qFront(){
            if(front == NULL){
                cout << "Queue is empty" << endl;
                return -1;
            }

            return front -> data;
        }

        int back(){
            if(rear == NULL){
                cout << "Queue is empty" << endl;
                return -1;
            }

            return rear -> data;
        }

        bool isEmpty(){
            if(front == NULL)
                return 1;
            
            return 0;
        }

        void print(){
            if(front == NULL){
                cout << "Queue is Empty" << endl;
                return ;
            }
            Node * temp = front;

            while(temp != NULL){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }
};


int main(){

    queue obj;

    obj.enqueue(10);
    obj.enqueue(10);
    obj.enqueue(10);
    obj.enqueue(10);

    obj.print();

    obj.dequeue();
    cout<< endl;
    obj.print();
    obj.dequeue();
    cout<< endl;
    obj.print();
    cout << endl;

    if(obj.isEmpty()){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }
    obj.print();
    cout << endl;
    cout << obj.qFront() << endl;
    cout << obj.back() << endl;
    // cout << obj << endl;


    return 0;
}