#include<iostream>
#include<stack>

using namespace std;

int main(){

    
    // creation of stack
    stack<int> s;
    s.push(10);
    s.push(3);
    s.pop();
    cout << "top:-  " << s.top() << endl;;

    if(s.empty()){
        cout << "Stack is empty "<< endl;
    }else{
        cout << "Stack is not empty " << endl;
    }

    cout << "Size " << s.size();
    
    return 0;
}