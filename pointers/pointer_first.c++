#include <iostream>

using namespace std;

int main()
{

    int num = 10;

    int *ptr = &num;

    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<num<<endl;

    // copying a pointer

    // int *q = ptr;
    // cout<<q<<" - "<<ptr<<endl;
    // cout<<*q<<" - "<<*ptr;

    // BAD PRACTICE
    int i = 5;
    int *p = &i;

    int **q = &p;

    cout<<"Same value "<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    

    // cout << p << "-" << q << endl;
    // cout << *p << "-" << *q << endl;


    // cout<<p<<" "<<*p;

    return 0;
}