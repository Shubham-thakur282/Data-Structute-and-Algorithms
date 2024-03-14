#include<iostream>
#include<stack>

using namespace std;

int minimumReversal(string &str){

    if(str.length() % 2 != 0){
        return -1;
    }

}

int main(){

    string str = "{}}{}}";

    cout << minimumReversal(str);

    return 0;
}