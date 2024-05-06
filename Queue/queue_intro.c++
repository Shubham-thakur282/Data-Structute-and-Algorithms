#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<int> que;

    que.push(12);
    que.push(10);
    que.push(11);
    que.push(12132);
    
    cout << que.front()<< endl;
    cout << que.back()<< endl;

    cout << que.size() << endl;
    que.pop();
    cout << que.size()<< endl;
    que.pop();
    cout << que.size()<<endl;
    que.pop();

    cout <<  que.size()<< endl;
    que.pop();

    if(que.empty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

    return 0;
}