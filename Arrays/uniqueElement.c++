#include<bits/stdc++.h>

using namespace std;

int uniqueElement(int arr[], int n)
{
    // xor of same integer gives zero and xor of 0 and some integeKOr gives back the integer

    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans =ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2,3,4,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<uniqueElement(arr,n);

    return 0;
}