#include<iostream>
using namespace std;


void update(int n){
    n++;
}

void update1(int &n){
    n++;
}

// its a bad practice gives warning but not giving any warning in my pc
int& func(int n){
    int num=n;
    int &ans =num;
    return ans;
}
// same problem with this below not a good practice
int* func2(int n){
    int *ptr = &n;
    return ptr;
}

int main(){

    int i=5;
    // int &j=i;

    cout << "Before:- "<< i<<endl;
    cout<<func(i)<<endl;
    cout << "After:- "<< i<<endl;

    

    // cout<<"before:- "<<endl;
    // cout<<i<<" "<<j<<endl; 

    // i++;
    // cout<<"I++:-\n";
    // cout<<i<<" "<<j<<endl;
    // j++;
    // cout<<"J++:-\n"; 
    // cout<<i<<" "<<j<<endl; 


    return 0;
}