#include<iostream>
using namespace std;

// existing in many forms is polymorphism
//function overloading - it is that there are number of function with same name but they differ in the arguments 
class A{
    public:
        void say(){
            cout << "Hello shubham" << endl;
        }
        // this is called function overloading
        // functions have same name no effect of different return type but classification changes when the parameters change
        // they both are same but have difference in the parameters 
        void say(string name){
            cout << "Hello " << name << endl;
        }
};


int main(){

    A obj;
    obj.say();

    return 0;
}