#include<iostream>
using namespace std;

// below the func function is of same name which is present in A and B class and when we call this function using the inherited class C it shows ambiguity
// to solve this problem we use scope resolution operator
class A{
    public:
    void func(){
        cout << "Inside A" << endl;
    }
};

class B{
    public:
    void func(){
        cout << "Inside B" << endl;
    }
};

class C:public A,public B{
    public:
    void func(){
        cout << "Inside C" << endl;
    }
};



int main(){
    C obj;
    // obj.funcC(); //ambiguous
    // solution
    obj.A::func();
    obj.B::func();
    obj.func();

    return 0;
}