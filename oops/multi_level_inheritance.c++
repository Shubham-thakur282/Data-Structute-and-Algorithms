#include<iostream>
using namespace std;

// int this case animal class is inherited by dog class and dog class is inherited by germanShepherd class
// this goes in three level so this type of classes are called mutli level classes

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

class GermanShepherd: public Dog{

    public:
        int height;

};

int main(){

    GermanShepherd G;

    G.speak();
    return 0;
}