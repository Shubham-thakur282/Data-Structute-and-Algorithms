#include<iostream>
using namespace std;

int main(){

    int arr[5] ={1,2,3,4,5};
    char ch[6] = "abcde";
    double db[5] = {1.4,1.6};
    /*
    cout<<arr<<endl;
    cout<<&ch<<endl;
    cout<<&ch[0]<<endl;

    char *c = &ch[0];

    cout<<endl;
    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;
    */

   char temp = 'x';
   char *c = &temp;

   cout<<c<<endl;
//    above give such output because it prints till the it finds a null character to stop till then it give garbage value
   cout<<*c<<endl;

    // cout<<db<<endl;

    return 0;
}