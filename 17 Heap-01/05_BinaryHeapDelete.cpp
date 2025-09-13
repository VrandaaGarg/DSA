#include <bits/stdc++.h>
using namespace std;

struct MinHeap
{
    int *arr;
    int size; // no. of elements in heap
    int cap; // capacity of heap
    MinHeap(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
 
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }  
    int parent(int i) { return (i - 1) / 2; }


    void minHeapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[i])
        {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    int extractMin()
    {
        if (size == 0)
        {
            return INT_MAX;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);
        return arr[size];
    }

    void decreaseKey(int i, int x)
    {
        arr[i] = x;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    // Delete Key
    void deleteKey(int i)
    {
        decreaseKey(i, INT_MIN); //first decrease the key to minimum value  
        extractMin();   // then extract the minimum element that is INT_MIN
    }


};