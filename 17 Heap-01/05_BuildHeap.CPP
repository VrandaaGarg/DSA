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

    void buildHeap()
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
        {
            minHeapify(i);
        }
    }

    //Time Complexity: O(n)
};