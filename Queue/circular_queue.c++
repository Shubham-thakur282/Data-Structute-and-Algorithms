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
            int ans = arr[front];
            arr[front] = -1;
            if(front == rear){
                front = rear = -1;
            }
            else if(front == size - 1){
                front = 0; //to maintain cyclic nature
            }
            else{
                front++;
            }
        }

        void print(){
            if(front == -1){
                cout << "Queue is empty" << endl;
            }

            int i = front;
            do{
                if(i==size-1 && i != rear){
                    i = 0;
                    cout << arr[i] << " ";
                    continue;
                }
                cout << arr[i] << " ";
                i++;
            }while(i!=rear+1);

        }

};

int main(){
    queue obj1;
    obj1.enqueue(10);
    obj1.enqueue(20);
    obj1.enqueue(30);
    
    obj1.print();

    obj1.deque();
    cout << endl;
    obj1.print();

    return 0;
}