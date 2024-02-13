#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    // below is operator overloadin
    void operator+ (B obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output:- " << value2 - value1 << endl;
    }

    void operator() (){
        cout << "() overloading " << this -> a << endl;
    }

};

int main(){

    B obj1,obj2;
    obj1.a = 10;
    obj2.a = 20;

    // here obj1 called operator+ function and takes obj2 as input and give output according to operator+ function
    obj1 + obj2;

    obj1();

    return 0;
}