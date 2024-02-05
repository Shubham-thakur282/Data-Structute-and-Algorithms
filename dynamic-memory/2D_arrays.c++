#include <iostream>
using namespace std;

int main()
{

    // for different number of rows and columns
    int row, col;
    cout << "Enter row and column size:- \n";
    cin >> row >> col;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    cout << "Enter Input for array:- \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Array is:- \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }

    delete []arr;

    /*
        //below code is for same number of rows and columns
        int n;
        cout<<"Enter number of rows:- ";
        cin>>n;
        // creating a 2D array using dynamic memory allocation
        int **arr = new int* [n];
        for(int i=0;i<n;i++){
            arr[i] = new int[n];
        }

        cout<<"Enter each element:- ";
        // taking input
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        // printing array
        cout << "Array is:- \n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    */

    return 0;
}