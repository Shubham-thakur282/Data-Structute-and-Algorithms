#include<iostream>
#include<cstring>
using namespace std;



class Hero{

private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;
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

    static int random(){
        return timeToComplete;
    }

    // destructor
    ~Hero(){
        cout<<"Destructor is called!"<<endl;
    }

};

int Hero::timeToComplete = 10;

int main(){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    // Hero s;
    // below works fine but its not recommended to do because static members don't belong to the object 
    // cout << s.timeToComplete << endl;

    return 0;
}