#include<iostream>
using namespace std;

// global variable is a bad practice instead use reference variable
int a = 100;


void max(){
    // accessing a in max function
    cout << "in max:- " << a * 500 << endl;
}

int main(){
    // accessing a in main funtion

    // int a = 10;
    // change a value to this local variable a
    cout << "in main:- " << a << endl;

    max();

    return 0;
}