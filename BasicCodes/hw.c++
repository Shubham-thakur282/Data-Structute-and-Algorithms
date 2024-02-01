#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter total amount:- ";
    cin>>n;
    int rs100,rs50,rs20,rs10,rs1;
    // 1330 find 100 50 20 10 and 1 used in this  but hoe?

    switch (1)
    {
    case 1:
        cout<<"Number of 100 notes are:- ";
        rs100 = n/100;
        n = n%100;
        cout<<rs100<<endl;
    
    case 2:
        cout<<"Number of 50 notes are:-";
        rs50 = n/50;
        n=n%50;
        cout<<rs50<<endl;

    case 3:
        cout<<"Number of 20 notes are:- ";
        rs20 = n/20;
        n = n%20;
        cout<<rs20<<endl;

    case 4:
        cout<<"Number of 10 notes are:- ";
        rs10 = n/10;
        n = n%10;
        cout<<rs10<<endl;
        
    case 5:
        cout<<"Number of 1 notes are:- ";
        rs1 = n/1;
        cout<<rs1<<endl;
    
    }

    return 0;
}