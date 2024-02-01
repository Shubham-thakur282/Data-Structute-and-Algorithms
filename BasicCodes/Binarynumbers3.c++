#include<bits/stdc++.h>

using namespace std;

int Binarytodecimal(int n)
{
    int ans = 0;
    int i = 0;

    while(n!=0)
    {
        int digit = n%10;
        
        if(digit == 1)
        {
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter a binay number:- ";
    cin>>n;

    printf("Deciaml number of %d  is:- ",n);
    cout<<Binarytodecimal(n);

    return 0;
}