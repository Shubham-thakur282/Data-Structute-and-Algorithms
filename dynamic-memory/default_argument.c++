#include<iostream>
using namespace std;

// start is default argument here i.e. start is optional to pass when function call is made but when some value is passed to start it will orverride the default value of the stat
void printAray(int arr[], int& n, int start = 0 ){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;

    printAray(arr,n);

    return 0;
}