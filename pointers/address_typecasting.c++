#include<iostream>
using namespace std;

int main(){

    char ch = 'a';
    int sum1= (int)ch+100;//explicitly change th char to int

    int a= 10;

    int sum = ch+a;//implicitly change the ch to int to its ascii value which is 97;

    cout<<sum<<endl;
    
    return 0;
}