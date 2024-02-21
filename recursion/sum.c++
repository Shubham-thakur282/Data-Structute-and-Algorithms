#include<iostream>
using namespace std;

int findSum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    return arr[0] + findSum(arr+1,n-1);
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Sum of the array is:- " << findSum(arr,n) << endl;

}