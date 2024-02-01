#include<bits/stdc++.h>

using namespace std;

int decimaltobinary(int n)
{
    // In this method we divide the number by 2 in each iteration till number becomes zero and save the value of the reaminder on the division of the number on each iteration which gives the binary number of the decimal number
    int ans = 0;
    int i = 0;
    while(n!=0)
    {
        int x = n%2;
        ans = (x*pow(10,i))+ans;
        n = n/2;
        i++;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    printf("binary of %d is :- ",n);
    cout<<decimaltobinary(n)<<endl;

    return 0;
}