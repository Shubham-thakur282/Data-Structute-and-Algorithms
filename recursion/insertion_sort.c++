#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    if(n==0 || n==1)
        return ;
    
    insertionSort(arr,n-1);
    int key = arr[n-1];
    int j = n-2;
    while(j>=0 && key < arr[j]){
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j+1] = key; 
}

int main(){
    int arr[] = {199, 11, 100, 9, 8, 7, 6, 4, 4, 3, 99, 1};
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    insertionSort(arr, n);

    cout << "After:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}