#include<bits/stdc++.h>

using namespace std;

bool relate(int a,int b, vector<vector<int>> M){
        return M[a][b] == 1;
    }
    
    
    int celebrity(vector<vector<int>>& M, int n) 
    {
        // code here 
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        int candidate;
        while(st.size() != 1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
                
            if(relate(a,b,M)){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        candidate = st.top();
        
        for(int i=0;i<n;i++){
            if(i!=candidate && (relate(candidate,i,M) || !relate(i,candidate,M))){
                return -1;
            }
        }
        return candidate;
    }

int main(){

    vector<vector<int>> arr = {{0,1,0},{0,0,0},{0,1,0}};
    int ans = celebrity(arr,3);

    cout<< "Celebrity :- "<< ans;

    return 0;
}