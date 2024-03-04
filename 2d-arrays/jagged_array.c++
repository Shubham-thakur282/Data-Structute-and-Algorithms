#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 = {1};
    vector<int> vec2 = {1,43,53};
    vector<int> vec3 = {1,9,8,76,3};
    vector<int> vec4 = {1,2,3,4,5,6,6};
    vector<int> vec5 = {1,2,3};
    vector<int> vec6 = {1,2};

    vector<vector<int>> ans;
    ans.push_back(vec1);
    ans.push_back(vec2);
    ans.push_back(vec3);
    ans.push_back(vec4);
    ans.push_back(vec5);
    ans.push_back(vec6);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}