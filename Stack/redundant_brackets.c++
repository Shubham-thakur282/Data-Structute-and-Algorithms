#include<bits/stdc++.h>
using namespace std;

bool isRedundant(string &str){

    stack<char> st;
    bool ans = false;
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else if(ch == ')'){
            char top = st.top();
            if(top == '('){
                return true;
            }else{
                while(!st.empty() && st.top() != '('){
                    st.pop();
                }
                st.pop();
                ans =false;
            }
        }
    }
    
    return ans;

}

int main(){

//     (a+b)
// (a+c*b)+(c))
    string str = "(a*b+(c/d))"; //"(a+b)";
    string s = "((a/b))"; //"(a+c*b)+(c))";

    if(isRedundant(str)){
        cout << "yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}