#include<bits/stdc++.h>

using namespace std;

// void swap(int &a, int &b)
// {
//     int temp =  a;
//     a = b;
//     b = temp;
// }

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements:- \n";
    cin>>n;
    int arr[n];
    cout<<"Enter array:- \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    reverse(arr,n);

    cout<<"\nArray after reverse:-\n";
    for(int i=0;i<n;i++)\
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}