#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<char> st;

    string str = "shubham";
    cout << "Before:- " << str << endl;

    for(int i =0 ;i<str.length();i++){
        st.push(str[i]);
    }

    for(int i =0 ;i<str.length();i++){
        str[i]=st.top();
        st.pop();
    }

    cout << "After:- " << str << endl;
    
    return 0;
}
