#include<bits/stdc++.h>

using namespace std;


int setBit(int a , int b)
{
    int count=0;
    while(a!=0)
    {
        int bit = a&1;
        if(bit==1)
        {
            count++;
        }
        a = a>>1;
    }

    while(b!=0)
    {
        int bit =  b&1;
        if(bit == 1)
        {
            count++;
        }
        b = b>>1;
    }

    return count;
}


int main()
{
    int a,b;
    cout<<"Enter two numbers:- ";
    cin>>a >> b;

    cout<<"Total set bits in a and b:- "<<setBit(a,b);

    return 0;
}