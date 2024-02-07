#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // dynamically creating a object of class hero
    Hero *b = new Hero;

    // below are the ways to access the dynamically created object's data members and functions
    (*b).level = 'A';
    // alerntive for above
    b->level = 'B';

    cout << "Level:- " << b->level << endl;

    return 0;
}