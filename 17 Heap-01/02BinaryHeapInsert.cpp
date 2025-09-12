#include <bits/stdc++.h>
using namespace std;

// Min Heap
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

    //Insertion in Min Heap
    void insert(int x)
    {
        if (size == cap) //when heap is full as using array so no dynamic size array
        {
            return;
        }

        size++; //  first increase the size and then insert the element
        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];) // if parent is greater than child then swap them
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};