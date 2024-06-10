#include<iostream>
using namespace std;

class queue{
    public:
        int size;
        int *arr;
        int front;
        int rear;
        
        queue(){
            size = 100001;
            arr = new int[size];
            front = rear = -1;
        }

        void enqueue(int value){
            if((front == 0 && rear == size - 1) || (rear == (front-1)%(size-1))){
                cout << "Queue is Full"<< endl;
            }else if(front == -1){
                front = rear = 0;
                arr[rear] = value;
            }
            else if(rear == size -1 && front !=0){
                rear = 0;
                arr[rear] = value;
            }else{
                rear++;
                arr[rear] = value;
            }
        }

        void deque(){
            if(front == -1){
                cout << "Queue is empty" << endl;
                return ;
            }

        }

};

int main(){

    return 0;
}