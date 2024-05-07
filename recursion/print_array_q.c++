#include<iostream>
using namespace std;

void solve(int *&arr,int n){
    if(n == 1){
        arr[0] = 1;
        return ;
    }
    arr[n-1] = n;
    solve(arr,n-1);
}


int* printArr(int n){

    int *arr = new int[n];
    solve(arr,n);
    return arr;
}

int main(){
    int n;
    cout << "Enter a number:-  " ;
    cin>> n;

    int *arr; 
    arr = printArr(n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}