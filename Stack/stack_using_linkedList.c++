#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    int next;
    
};

class Stack
{
public:
    int data;
    Stack * next;
    Stack * top;
    
    Stack(){
        top = NULL;
    }
    // Stack(int element){
    //     this -> data = element;
    // }
    ~Stack(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with value:- " << val << endl;
    }

    void push(int element){
        Stack *temp = new Stack;
        temp -> data = element;
        temp -> next = top;
        top = temp;
    }

    void pop(){
        if(top == NULL){
            cout << "Stack underflow" << endl;
            return ;
        }

        Stack *temp = top;
        if(top -> next == NULL)
            top = NULL;
        else
            top = top -> next;

        temp -> next = NULL;
        delete temp;    
    }

    bool isEmpty(){
        if(top == NULL)
            return true;
        
        return false;
    }

    int peak(){
        
        if(top == NULL){
            cout <<  "Stack is empty" << endl;
            return -1;
        }else{
            return top -> data;
        }
    }

};

int main(){
    Stack * st = new Stack;

    st -> push(100);
    cout << st -> peak() << endl;;
    st -> push(120);
    cout << st -> peak() << endl;
    st -> push(95);
    cout << st -> peak() << endl;
    st -> pop();
    cout << st -> peak() << endl;
    st -> pop();
    cout << st -> peak() << endl;
    st -> pop();
    cout << st -> peak() << endl;
    if(st -> isEmpty()){
        cout <<"Stack is empty outside" << endl;
    }else{
        cout << "Stack is not empty outside" << endl;
    }
    cout << "Top:- " << st -> peak();

    return 0;
}