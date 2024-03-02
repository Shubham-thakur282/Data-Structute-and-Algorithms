#include<iostream>
#include<vector>
using namespace std;

void solve(string str,string output,int index,vector<string> &ans){
    if(index >= str.length()){
        ans.push_back(output);
        return ;
    }

    solve(str,output,index+1,ans);
    output += str[index];
    solve(str,output,index+1,ans);

}

vector<string> subsequence(string &str){
    vector<string> ans;
    string output;
    int index = 0;
    solve(str,output,index,ans);
    return ans;
} 

int main(){
    string str = "abc";

    vector<string> ans = subsequence(str); 

    for(int i =0 ;i< ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}