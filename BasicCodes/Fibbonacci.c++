#include<bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
    int f1 = 0,f2 = 1;
    if(n==1)
    {
        return f1;
    }   
    if(n==2)
    {
        return f2;
    }

    int ans=0;
    for(int i=2;i<n;i++)
    {
        int f = f1+f2;
        f1 = f2;
        f2 = f;

        if(i==n-1)
        {
            ans = f;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    printf("The %dth fibonacci number is:- %d",n,fibonacci(n));

    return 0;
}