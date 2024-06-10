#include <bits/stdc++.h>

using namespace std;

vector<int> nextSmaller(vector<int> arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

vector<int> prevSmaller(vector<int> arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr [i] << " ";
    }
    cout << endl;
}

int largestRectangle(vector<int> &heights)
{
    int n = heights.size();
    vector<int> next(n);
    next = nextSmaller(heights, n);
    print(next);
    vector<int> prev(n);
    prev = prevSmaller(heights, n);
    print(prev);
    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];
        
        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    // print(next);
    // print(prev);
    return area;
}

int main()
{
    vector<int> height = {2, 1, 5, 6, 2, 3};
    print(height);
    int ans = largestRectangle(height);

    cout << "Max area :" << ans << endl;

    return 0;
}