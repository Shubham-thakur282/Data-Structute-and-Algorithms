#include<bits/stdc++.h>

using namespace std;
vector<int> nextSmallerElement(vector<int>arr, int n){
    stack<int> st;
    st.push(-1);

    vector<int> ans(n);

    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }

    return ans;

}

int main(){

    vector<int> arr = {2,3,4,3,5,7,3};

    vector <int> ans = nextSmallerElement(arr,7);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    return 0;
}