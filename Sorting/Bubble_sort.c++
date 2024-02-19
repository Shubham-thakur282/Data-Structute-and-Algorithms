#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        // loop will run for round 1 to n-1 rounds and on every round it will place ith largest element on ist right place in sorted array
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag = false)
        {
            // this the optimization for the bubble sort if the array is already sorted
            return;
        }
        flag = false; 
        //change the flag to false if it becomes true so that when iterating and the array gets sorted in the middle of the iteration and for that it don't need to run extra rounds of comparison which will save some time for the algorithm
    }
}

int main()
{
    int arr[] = {199,11,100,9, 8, 7, 6, 4, 4, 3, 99, 1};
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