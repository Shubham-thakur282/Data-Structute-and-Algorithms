#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    Hero(){
        cout << "Default Constructor!" << endl;
    }

    Hero(int health,char level){
        cout << "parameter constructor called!" << endl;
        this -> health = health;
        this -> level = level;
    }

    // const member function
    void print() const {
        cout << "Health:- " << this -> health << endl;
        cout << "Level:- " << this -> level << endl;
    }

    void setHealth(int health){
        this -> health = health;
    }

    void setLevel(char level){
        this -> level = level;
    }

    ~Hero(){
        cout << "Destructor called!" << endl;
    }


};

int main(){

    Hero S;
    Hero const *R = new Hero(100,'A');
    S.setHealth(100);
    S.setLevel('A');
    
    S.print();
    R->print();

    delete R;
    return 0;

}