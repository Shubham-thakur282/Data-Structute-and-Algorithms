// pivot element in a rotated array

#include<bits/stdc++.h>

using namespace std;

int pivotElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int m = s+(e-s)/2;

    while(s<e){

        if(arr[m]>=arr[0]){
            s = m +1;
        }
        else{
            e = m;
        }
        m = s+(e-s)/2;
    }

    return s;

}

int main(){

    int arr[] = {1,3};

    cout<<"Index of pivot Element is:- "<<pivotElement(arr,2);
    return 0;
}