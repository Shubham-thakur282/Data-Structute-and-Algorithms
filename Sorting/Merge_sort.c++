#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid = s+(e-s)/2;
    int lenL = mid-s+1; //size of left array
    int lenR = e-mid;  //size of right array
    int *L = new int[lenL]; //create left array 
    int *R = new int[lenR]; //create right array

    int k = s;
    for(int i=0;i<lenL;i++){
        L[i] = arr[k++]; //copy left sides arrays value to this array
    }
    k = mid+1;
    for(int i=0;i<lenR;i++){
        R[i] = arr[k++]; //copy right sides arrays value to this array
    }

    int l = 0;
    int r = 0;

    k = s;

    //place the values in sorted manner
    while(l<lenL && r < lenR){
        if(L[l] < R[r]){
            arr[k] = L[l]; 
            l++;
            k++;  
        }else{
            arr[k] = R[r];
            r++;
            k++;
        }
    }

    // if left array is bigger in size
    while(l < lenL){
        arr[k] = L[l];
        l++;
        k++;  
    }
    // if right array is bigger in size
    while(r < lenR){
        arr[k] = R[r];
        r++;
        k++;
    }
    delete []L;
    delete []R;
    // remove the memories allocated to left and right arrays

}

void mergeSort(int arr[],int s, int e){
    if(s >= e)
        return;
    
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

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
    
    mergeSort(arr,0,n-1);

    cout << "After:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}