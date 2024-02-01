#include<iostream>
using namespace std;

void printval(int *p){
    
    cout << *p << endl;

}

int main(){
/*
    int v =5;
    int *p =&v;

    printval(p);
*/

    int arr[5] = {1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=i[arr];
    }

    cout<<sum<<endl;
    cout<<*arr<<endl;

    return 0;
}