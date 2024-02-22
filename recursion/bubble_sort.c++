#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;

    bool flag = true;
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            flag = false;
        }
    }
    if (flag)
    {
        return;
    }

    bubbleSort(arr, n - 1);
}

int main()
{
    // int arr[] = {199, 11, 100, 9, 8, 7, 6, 4, 4, 3, 99, 1};
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    bubbleSort(arr, n);

    cout << "After:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}