#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int s,int e){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    

    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid] < key){
        return binarySearch(arr,key,mid+1,e);
    }
    
    if(arr[mid] > key){
        return binarySearch(arr,key,s,mid);
    }

    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int s = 0;
    int e = n-1;
    
    cout << "Index of 100 is:- " << binarySearch(arr,100,s,e);
    
    return 0;
}