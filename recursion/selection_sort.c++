#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    if(n==0 || n==1)
        return ;
    
    int min = 0;
    for(int i=0;i<n;i++){

        if(arr[min] > arr[i]){
            min = i;
        }
    }
    swap(arr[min],arr[0]);
    selectionSort(arr+1,n-1);
}


int main(){
    // int arr[] = {199, 11, 100, 9, 8, 7, 6, 4, 4, 3, 99, 1};
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    selectionSort(arr, n);

    cout << "After:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}