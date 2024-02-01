#include<bits/stdc++.h>

using namespace std;


int binarySearch(int arr[],int n,int key){
    int mid;
    
    int l=0,r=n-1;

    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }

    return -1;
}


int main(){
    int n;
    cout<<"Enter number of elements:- ";
    cin>>n;
    int arr[n];

    cout<<"Enter Elements:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key:-";
    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key);

    return 0;
}








// int binarySearch(int arr[], int n, int key){

//     int l =0,r=n-1;
//     int mid;
//     while(l<=r){
//         mid = l + (r-l)/2;
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(key > arr[mid]){
//             l = mid+1;

//         }
//         else{
//             r = mid -1;
        
//         }
//         // mid = l+(r-l)/2;
//     }

//     return -1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int key;
//     cin>>key;

//     cout<<binarySearch(arr,n,key);

//     return 0;
// }