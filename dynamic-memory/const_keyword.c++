#include<iostream>
using namespace std;

void func(int n){
    // n changes because here is copy of n which is change not  the constant variable n
    n = n+1;
    cout<< "inside: -" <<n<<endl;

}


int main(){
    // constant variable cannot change it any where
    const int n = 10;
    int x = 100;
    int * const ptr = &x;
    // const pointer is used to point to the address of the constant variable
    // func(n);

    int i = 20;
    const int *p = &i;
    // *p +=10;
    cout<<i;
    // 
    // *ptr = *ptr +100;
    // cout<<endl;
    // cout<<x;
    // cout<< "outside: -" <<n<<endl;
    return 0;
}