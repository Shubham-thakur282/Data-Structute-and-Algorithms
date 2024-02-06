#include<iostream>
using namespace std;


int factorial(int n){
    // base case and it is mandatory
    if(n==1){
        return 1;
    }
    // cout<<n<<endl;
    return n*factorial(n-1);//recursive relation and it is mandatory too
}

int main(){
    int n=5;

    cout << factorial(n);

    return 0;
}