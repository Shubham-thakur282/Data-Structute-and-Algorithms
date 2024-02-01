#include<iostream>
using namespace std;

int main(){
    /*
    int arr[10]={4,7,6};

    cout<<"Address of memroy block is:- "<<arr<<endl;
    cout<<"Address of memroy block is:- "<<&arr[0]<<endl;

    cout<<"Value of *arr:- "<<*arr<<endl;
    cout<<"Value of *arr:- "<<*arr+1<<endl;
    cout<<"Value of *arr:- "<<*(arr+1)<<endl;
    
    
    int i=2;
    cout<<"Value of *arr:- "<<i[arr]<<endl;

    cout<<endl;

    cout<<"compare arr & arr[0] :- "<<(arr && (&arr[0]))<<endl;

    */

   int arr[10];
   int *ptr = &arr[0];

   cout<<ptr<<endl;
   ptr +=1;
   cout<<ptr<<endl;


    return 0;
}