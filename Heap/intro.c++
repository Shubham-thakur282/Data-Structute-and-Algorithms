/*
what is heap? :-> complete binary tree(every level is completely filled except last) that comes with a head ordere property
*/

#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int d)
    {
        size++;
        int i = size;
        arr[i] = d;

        while (i > 1)
        {
            int parent = i / 2;
            if (arr[parent] < arr[i])
            {
                swap(arr[parent], arr[i]);
                i = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Heap is empty! " << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = i * 2;
            int right = i * 2 + 1;

            if (left < size && arr[i] < arr[left])
            {
                swap(arr[left], arr[i]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[right], arr[i]);
                i = right;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();

    return 0;
}