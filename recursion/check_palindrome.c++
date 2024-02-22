#include<iostream>
using namespace std;

bool checkPalindrome(string str,int s,int e){
    if(s > e){
        return 1;
    }
    if(str[s] != str[e]){
        return 0;
    }
    return checkPalindrome(str,s+1,e-1);
}

int main(){
    string str = "naman";

    if(checkPalindrome(str,0,str.length()-1)){
        cout << "It is a valid palindrome!" << endl;
    }else{
        cout << "Not a palindrome!" << endl;
    }

    return 0;
}