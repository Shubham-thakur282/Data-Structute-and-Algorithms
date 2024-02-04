#include<iostream>
using namespace std;


void update(int **ptr){
    // ptr = ptr +1; //no change outside
    // *ptr = *ptr +1; //some change outside

    **ptr = **ptr +1;
    // value change of the integer variable
    // cout << "inside:- "<< **ptr << endl;
    // cout << "inside:- "<< *ptr << endl;

}

int main(){


    //some mcqs
/*
first mcq
    int i=8;
    int j=18;
    int *p = &j;
    *p = 9;
    cout<< "i:- "<< i <<endl;
    cout<< "j:- "<< j <<endl;

*/

/*
second mcq
because p = q;
ouput = 6;
    int i=5;
    int *p =&i;
    int *q= p;
    cout<<"before q:-"<<q<<endl;
    cout<<"before p:-"<<p<<endl;

    (*q)++;    
    cout<<"after q:-"<<q<<endl;
    cout<<"after p:-"<<p<<endl;

    cout<<p<<endl;
    cout<<i<<endl;
*/

    // third
    // int i=9;
    // int * p=&i;
    // cout<<(*p)++<<endl;
    // cout<<i<<endl;

    // fourth:-this below is a segmentation fault error define pointer to 0 which is not a good practice
    // int *p = 0;
    // int i =110;
    // *p = i;
    // cout<<*p<<endl;

    // fifth
    // char ch ='a';
    // char *ptr =&ch;
    // ch++;
    // cout<<*ptr<<endl;

    // six
    // char arr[] = "abcde";
    // char *ptr =&arr[0];
    // ptr++;
    // cout<<ptr<<endl;

    // seven
    int i = 110;
    int *p = &i;
    int **q=&p;
    int j = (**q)++ + 9;
    cout<<i<<" "<<j<<endl;

/*    
    int i=5;
    int* ptr = &i;
    // double pointer: pointer to other pointer;
    int** ptr2 = &ptr;
    int*** ptr3 = &ptr2;
    ***ptr3 = (***ptr3)+1;

    cout << "before:- " << i << endl;
    cout << "before:- " << ptr << endl;
    cout << "before:- " << ptr2 << endl;
    update(ptr2);
    cout << "after:- " << i << endl;
    cout << "after:- " << ptr << endl;
    cout << "after:- " << ptr2 << endl;


    cout << "Same value of i from different pointers:- \n";
    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;

    cout << "Printing address of I:-\n";
    cout << &i <<endl;
    cout << ptr <<endl;
    cout << *ptr2 <<endl;
    cout << **ptr3 <<endl;

    cout << "Address of everyone:- \n";
    cout << &i << endl;
    cout << &ptr << endl;
    cout << &ptr2 << endl;
    cout << &ptr3 << endl;

    cout << "Addres one after one:- \n";
    cout << ptr << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    cout<<"ptr:- \n";
    cout<< *ptr << endl;
    cout<< ptr << endl;
    cout<< &ptr << endl;
    cout<<"ptr2:- \n";
    cout<< ptr2 << endl;
    cout<< *ptr2 << endl;
    cout<< **ptr2 << endl;
    cout<< &ptr2 << endl;
    cout<<"ptr3:- \n";
    cout<< ptr3 << endl;
    cout<< *ptr3 << endl;
    cout<< **ptr3 << endl;
    cout<< (***ptr3)+1 << endl;
    cout<< &ptr3 << endl;
*/
    return 0;
}