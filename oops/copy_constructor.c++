#include <iostream>
#include<cstring>
using namespace std;

class Hero{

private:
    int health;

public:
    char level;
    char *name;
    // default constructor
    Hero(){
        name = new char[100];
        cout << "Default constructor called"<<endl;;
    }

    // parametrized constructo
    Hero(int health)
    {
        cout << "this->" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    // here temp is pass by reference not by value because if passed by value it will create a copy and it will work in a loop but in case of pass by reference both will point to the same addres
    Hero (Hero& temp){
        cout << "Copy constructor called\n";
        // way to create a deep copy
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setName(char name[]){
        // this -> name = name;
        strcpy(this -> name , name);
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void print()
    {
        cout << "Name:- " << this->name << ", ";
        cout << "Health:- " << this->health << ", ";
        cout << "levl:- " << this->level << endl;
    }

    // destructor
    ~Hero(){
        cout<<"Destructor is called!"<<endl;
    }

};

int main()
{   

    // destructor called automatically
    Hero S;
    // 
    Hero *R= new Hero;
    // manually call the destructor
    delete R;

    // Hero S;
    // S.setHealth(100);
    // S.setLevel('A');
    // char name[8] = "Shubham";
    // S.setName(name);

    // S.print();


    // Hero R(S);
    // R.print();

    // S.name[0] = 'A';
    // S.level = 'B';
    // S.print();
    // R.print();
//    S = R; //copy name health and level of R to name health and level of S and = is called copy assignment operator
    // S.print();
    // R.print(); 
    // cout<<"hello\n";
    // R.name[0] = 'S';
    // S.print();
    // R.print();
    // Hero S(10,'C');
    // S.print();
    // copy constuctor
    //Hero R(S);//for this copy constructor is called
    // R.print();
    // R.level = 'A';
    // S.print();
    // R.print();
   
    return 0;
}