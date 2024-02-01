#include<bits/stdc++.h>

using namespace std;

void swapAlternate(int arr[],int n)
{
    int first = 0,second = 1;
    while(second<n){
        swap(arr[first],arr[second]);
        first+=2;
        second+=2;
    }

}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    swapAlternate(arr,n);

    cout<<"Swapped array \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}