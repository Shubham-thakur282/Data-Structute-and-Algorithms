#include<iostream>
using namespace std;

int main(){

    int a =10;
    void* p =&a;
    char ch = 'a';
    p=&ch;
    cout<<p<<endl;
    cout<<*(char*)p<<endl;//typecasted to int type

    return 0;
}