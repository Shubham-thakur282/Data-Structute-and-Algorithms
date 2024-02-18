#include <iostream>
using namespace std;
// on every pass it bring the minmum value to its right place
void selectionSort(int arr[], int n)
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i; //index will store the value of the index whose value is minimum
        for (int j = i; j < n; j++)
        {
            if (arr[index] > arr[j])
                index = j;
        }
        swap(arr[index], arr[i]);
    }
}

int main()
{

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    selectionSort(arr, n);

    cout << "After:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}