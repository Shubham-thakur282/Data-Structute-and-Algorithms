#include<iostream>
using namespace std;


class A{
    public:
    void funcA(){
        cout << "Inside A" << endl;
    }
};

class D{
    public:
    void funcD(){
        cout << "Inside D" << endl;
    }
};

class B:public A{
    public:
    void funcB(){
        cout << "Inside B" << endl;
    }
};

class C:public A,public D {
    public:
    void funcC(){
        cout << "Inside C" << endl;
    }
};


int main(){

    B obj1;
    obj1.funcA();
    obj1.funcB();

    C obj2;
    obj2.funcA();
    obj2.funcC();
    obj2.funcD();

    return 0;
}