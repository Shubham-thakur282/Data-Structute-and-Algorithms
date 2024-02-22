#include<iostream>
using namespace std;

long long power(int a, int b){
    if(b==0)
        return 1;
    
    if(b == 1)
        return a;
    
    if(b % 2 == 0)
        return power(a,b/2) * power(a,b/2);
    else
        return power(a,b/2) * power(a,b/2) * a;

}

int main(){

    int a = 2,b=1024;
    long long ans = power(a,b);
    cout << "10 power 4 is:- " << ans;

    return 0;
}