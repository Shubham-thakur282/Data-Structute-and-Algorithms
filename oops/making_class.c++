#include <iostream>
// #include "Hero.c++"
// above is the way to include the other files code to another file
// in above we include the hero class to our this function so that we can use that here wihout any problem
using namespace std;

class Hero
{
private:
    int health;

public:
    // char name[100];
    char level;

    // constructors
    // Hero(){
    //     cout << "Constructor called!" << endl;
    // }

    // parametrized constructor
    Hero(int health){
        cout << "this->" << this << endl;
        this->health = health;

    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }
    // below functions are getters and setters
    // get function are getter
    // set function are setter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void print(){
        cout << health << "  " << level << endl;;
    }

};

int main()
{

    // creating an object for the hero class
    // cout << "hi" << endl;
    // statically
    Hero sh(100,'A');
    // cout << "Address:- " << &sh << endl;
    sh.print();

    Hero *temp = new Hero(80,'B');
    temp -> print();


    // cout << "between " << endl;
    // dynamically
    // Hero *b = new Hero(80);
    // cout << "Hello" << endl;
    // above is the static allocation to create an object
    // size of the object is equal to the number of properties described in the class such that fot above if char[100] size is 100 and health size is 4 and char level is 4 so total will be 108 4
    // for an empty class size of object is 1
    // sh.health = 100;
    // cout << sizeof(sh) << endl;

    // sh.name = "Shubham";

    // sh.health = 100;
    // sh.setLevel('A');
    // sh.setHealth(100);
    // cout << sh.getHealth() << endl;
    // cout << sh.getLevel() << endl;

    return 0;
}