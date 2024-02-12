#include<iostream>
using namespace std;

class A{

    public:
        void funcA(){
            cout << "Inside A " << endl;
        }

};

class B:public A{

    public:
        void funcb(){
            cout << "Inside B" << endl;
        }

};

class C:public A{
    public:
        void funcC(){
            cout << "Inside C" << endl;
        }
};

int main(){

    B obj1;
    obj1.funcA();
    obj1.funcb();

    C obj2;
    obj2.funcA();
    obj2.funcC();


    return 0;
}