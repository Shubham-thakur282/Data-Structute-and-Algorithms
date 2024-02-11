#include<iostream>

using namespace std;

class Animal{

    public:
        int age;
        int weight;

        void bark(){
            cout << "Barking" << endl;
        }

};


class Human{
    public:
        void speak(){
            cout << "Speaking "<< endl;
        }

};

// multiple inheritance
// Hybrid inherits the properties of both animal and human class this type of inheritanc is called multiple inheritance
class Hybrid: public Animal, public Human{
    public :
        string color;
};

int main(){

    Hybrid a;
    a.speak();
    a.bark();

    return 0;
}