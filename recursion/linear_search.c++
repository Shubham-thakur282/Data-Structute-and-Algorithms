#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int target){
    if(n == 0){
        return 0;
    }
    if(arr[0] == target){
        return 1;
    }

    return linearSearch(arr+1,n-1,target);

}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(linearSearch(arr,n,10)){
        cout << "Found!" << endl;
    }else{
        cout << "Not Found!" << endl;
    }

    return 0;
}