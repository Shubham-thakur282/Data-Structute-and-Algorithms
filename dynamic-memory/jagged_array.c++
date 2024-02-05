#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number of row:- \n";
    cin >> n;

    int **arr = new int*[n];

    for(int i=0;i<n;i++){
        if(n%2 == 0){
            arr[i] = new int[n + 1];
        }else{
            arr[i] = new int[n];
        }
    }

    for(int i=0;i<n;i++){
        cout << sizeof(arr[i])<<" ";
    }

    return 0;
}