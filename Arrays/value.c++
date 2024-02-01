#include<bits/stdc++.h>

using namespace std;

void change(int *a){
    *a=*a-1;
    cout<<*a;
}


int main(){

    int a=5,b=10;

    change(&a);
    cout<<"outside"<<a;

    return 0;
}