#include<bits/stdc++.h>

using namespace std;

int decimaltobinary(int n)
{
    int ans = 0;
    int i = 0; 
    while(n!=0)
    {
        int bit = n&1;
        ans = bit*pow(10,i)+ans;
        n = n>>1;
        i++;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    printf("The binary number of %d is:- ",n);
    cout<<decimaltobinary(n);

    return 0;
}