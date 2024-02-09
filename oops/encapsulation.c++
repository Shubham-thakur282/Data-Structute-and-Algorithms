#include<iostream>
using namespace std;

class student{
    private:
    // all the data memebers are initialized private 
        string name;
        int age;
        int rollno;
    
    public:
    // all member functions are public
        student(){
            cout << "Constructor called!" << endl;
        }

        int getAge(){
            return this -> age;
        }
        string getName(){
            return this -> name;
        }
        int getRollno(){
            return this -> rollno;
        }
};

int main(){
    student S;

    return 0;
}