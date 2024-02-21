#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    int i = 2;
    while(i<=sqrt(n)){
        if(n % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    int n =2;

    if(isPrime(n)){
        cout << "It is a prime number" ;
    }else{
        cout << "It is not a prime number" ;
    }

    return 0;
}