#include<iostream>
using namespace std;
// inline function wroks only for 1 to 3 lines of code
// advatange:-
// no extra memory usage
// no function call overhead

inline int getMax(int& a, int& b){
    return (a>b)?a:b;
}



int main(){
    
    int a = 1;
    int b = 2;

    int ans = 0;

    ans = getMax(a,b);
    cout << ans << endl;


    a += 3;
    b += 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
}