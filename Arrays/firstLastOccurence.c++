#include<bits/stdc++.h>

using namespace std;

int firstOcc(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid;
    int ans =-1;

    while(s <= e){
        mid = s+(e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else if( key < arr[mid]){
            e = mid -1;
        }
    }

    return ans;
}


int lastOcc(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid;
    int ans =-1;

    while(s <= e){
        mid = s+(e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid +1;
        }
        else if( key < arr[mid]){
            e = mid -1;
        }
    }

    return ans;
}


int main(){

    int arr[] = {1,2,3,3,3,3,5};

    cout<<"first Occurence of 3 is at index "<<firstOcc(arr,7,3)<<endl;

    cout<<"first Occurence of 3 is at index "<<lastOcc(arr,7,3);

    return 0;
}