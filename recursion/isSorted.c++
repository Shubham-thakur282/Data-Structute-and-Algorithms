#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        return isSorted(arr + 1, n - 1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 69};
    int n = sizeof(arr)/sizeof(arr[0]);

    if (isSorted(arr, n) == 1)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sortd";
    }

    return 0;
}