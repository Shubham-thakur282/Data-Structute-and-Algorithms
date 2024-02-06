#include<iostream>
using namespace std;


void digit(int n){

    if(n == 0){
        return ;
    }
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    digit(n/10);
    int x = n % 10;
    cout << arr[x] <<" ";
    // switch case is longer way we can either use a array of string where we put value of number string in array at there index
    // switch (x)
    // {
    // case 0:
    //     cout << "Zero "; 
    //     break;
    
    // case 1:
    //     cout << "One "; 
    //     break;

    // case 2:
    //     cout << "Two "; 
    //     break;

    // case 3:
    //     cout << "Three "; 
    //     break;

    // case 4:
    //     cout << "Four "; 
    //     break;

    // case 5:
    //     cout << "Five "; 
    //     break;

    // case 6:
    //     cout << "Six "; 
    //     break;
    
    // case 7:
    //     cout << "Seven "; 
    //     break;

    // case 8:
    //     cout << "Eight "; 
    //     break;

    // case 9:
    //     cout << "Nine "; 
    //     break;
    // }

}


int main(){
    int n;
    cin>>n;
    digit(n);

    return 0;
}