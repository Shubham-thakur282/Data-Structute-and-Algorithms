#include<bits/stdc++.h>

using namespace std;

char toLowerCase(char ch){

    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        cout<<temp;
        return temp;
    }

}
int main(){

    // char ch = "S";
    cout<<"lower S :- "<< toLowerCase('A');

    return 0;

}