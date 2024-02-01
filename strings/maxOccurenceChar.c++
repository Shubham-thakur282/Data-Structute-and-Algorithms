#include<bits/stdc++.h>

using namespace std;

char maxOccurence(string str){
    char ans;
    int arr[26] = {};

    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            arr[str[i]-'a'] += 1;
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            arr[str[i]-'A'] += 1;
        }
    }

    int max;
    int index;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            max = arr[i];
            index = i;
        }
    }

    return index+'a';

    // return ans;
}

int main(){

    cout<<maxOccurence("Hello");

    return 0;
}