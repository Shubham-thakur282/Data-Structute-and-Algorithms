#include<iostream>
using namespace std;

bool gcd(int a ,int b){
    if(a == 0){
        return 1;
    }
    if(a < 0){
        return -1;
    }
    return gcd(a-b,b);
}

int findGcd(int a,int b){
    cout << "a:- " << a << " b:- "<<b << endl;
    if(a == 0)
        return b;
    
    if(b == 0)
        return a;
    
    if(a != b){
        if(a>b)
            return findGcd(a-b,b);
        else
            return findGcd(a,b-a);
    }

    return b;

}

int main(){

    int a = 24,b=72;

    if(gcd(a,b)){
        int ans = findGcd(a,b);
        cout << "Exists and its is:- " << ans;
    }
    else{
        cout << "Doesn't exist";
    }

    return 0;
}