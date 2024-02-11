#include<iostream>

using namespace std;


// below is single inheritance is includes only two class which have only one level animal ans dog
class Animal{

    public:
        int age;
        int weight;

        void speak(){
            cout << "Speaking " << endl;
        }

};

class Dog: public Animal{

    public:
        string color;

};


int main(){

    Dog tommy;
    tommy.speak();

    return 0;
}