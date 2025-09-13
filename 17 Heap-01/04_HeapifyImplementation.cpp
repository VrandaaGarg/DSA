#include <bits/stdc++.h>
using namespace std;

//Binary heap (heapify and extract Min)

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

    // Heapify
    void minHeapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[i]) // lt < size means lt is a valid index
        {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest]) // rt < size means rt is a valid index 
        {
            smallest = rt;
        }
        if (smallest != i) // if smallest is not i then swap and call minHeapify on smallest. 
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }  
    
    //get Min from minHeap is a constant time operation as root is always minimum
    // Extract Min
    int extractMin()
    {
        if (size == 0) // if heap is empty 
        {
            return INT_MAX; //means infinite return
        }
        if (size == 1) // if heap has only one element
        {
            size--;
            return arr[0]; // return the only element
        }
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);
        return arr[size];   // return the minimum element as its disjoint from the heap and present at last index
    }
};


//Time Complexity of minHeapify is O(logn)
// BEST CASE: O(1) when we are at leaf node 
//Space Complexity: O(h)


//Time Complexity of extractMin is O(logn)
//Space Complexity: O(h)
