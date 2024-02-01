#include<iostream>

using namespace std;

bool binary_search(int arr[][3],int key, int row, int col){
    int s = 0;
    int e = row*col-1;

    int mid = s+(e-s)/2;

    while(s<=e){
        int element  = arr[mid/col][mid%col];

        if(element == key){
            return 1;
        }
        if(element > key){
            e = mid-1;
        }
        if(element < key){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return 0;

}

int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    int key;
    cout<<"Enter key:- ";
    cin>>key;
    int row=3,col=3;

    if(binary_search(arr,key,row, col)){
        cout<<"Found";
    }else{
        cout<<"Not found";
    }

    return 0;
}