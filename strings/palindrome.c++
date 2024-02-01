#include<bits/stdc++.h>

using namespace std;

    char toLowercase(char ch){

        if(ch >= 'a' && ch <= 'z'){
            return ch;
        }
        else{
            return ch - 'A'  + 'a';
        }
    }

    bool checkSpecialChar(char ch){
        return (ch >= '0' && ch <= '9' ) || ( ch >= 'a' && ch<='z' ) || ( ch>='A' && ch<='Z' );
    }

    bool isPalindrome(string str) {

        int s = 0;
        int e = str.size()-1;
        while(s < e){
            
            if(!checkSpecialChar(str[s])){
                s++;
            }
            else if(!checkSpecialChar(str[e])){
                e--;
            }
            else if(toLowercase( str[s] ) != toLowercase( str[e] )){
                return false;
            }else{
                s++;
                e--;
            }

        }

        return 1;
    }

int main(){

    string str = "race a car";

    cout<<isPalindrome(str);

    return true;
}