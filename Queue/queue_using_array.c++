#include<iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int front;
        int back;
        int size;

        queue(int size){
            this -> size = size;
            arr = new int[size];
            front = 0;
            back = 0;
        }

        void enqueue(int element){
            if(back == size){
                cout << "Queue is full" << endl;
            }else{
                arr[back] = element;
                back++;
            }
        }

        void dequeue(){
            if(front == back){
                cout << "Queue is empty" << endl;
            }else{
                front++;
                if(front == back){
                    front = 0;
                    back = 0;
                }
            }
        }

        bool isEmpty(){
            if(front == back){
                return true;
            }

            return false;
        }

        int Front(){
            if(front == back){
                cout << "Empty queue" << endl;
                return -1;
            }else{
                return arr[front];
            }
        }

        int rear(){
            if(front == back){
                cout << "Empty queue" << endl;
                return -1;
            }
            else{
                return arr[back-1];
            }
        }

        void print(){
            if(back == front){
                cout << "Empty queue" << endl;
                return;
            }
            for(int i=front;i<back;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};

int main(){

    queue obj(4);
    obj.enqueue(10);
    obj.enqueue(10);
    obj.enqueue(10);
    obj.enqueue(10);
    obj.enqueue(10);

    obj.print();

    obj.dequeue();
    obj.dequeue();

    if(obj.isEmpty()){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }

    cout << obj.Front() << endl;
    cout << obj.rear() << endl;
    cout << obj.back << endl;

    return 0;
}
