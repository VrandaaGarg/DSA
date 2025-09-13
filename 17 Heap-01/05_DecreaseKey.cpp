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

    // Decrease Key
    void decreaseKey(int i, int x)
    {
        arr[i] = x;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};