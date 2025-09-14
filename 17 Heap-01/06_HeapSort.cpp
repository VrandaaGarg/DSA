#include <bits/stdc++.h>
using namespace std;

//The ide aof heap sort is based on the idea of selection sort
//In selection sort we find the maximum element and place it at the end
//In selection we linearly search for the maximum element

//In heap sort we use heap data structure to find the maximum element
//We first build a max heap from the input array
//Then we swap the root of the heap with the last element of the heap
//We reduce the size of the heap by 1 and heapify the root of the tree
//We repeat the above steps until the size of the heap is greater than 1

//Time Complexity: O(nlogn)

//When sorting in decreasing order we use min heap
//When sorting in increasing order we use max heap

void maxHeapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root 
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--) //starting from last non-leaf node and going to root
    {
        maxHeapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

//time complexity of selection sort is O(n^2)
//time complexity of heap sort is O(nlogn)
//merge sort and quick sort takes less time than heap sort in practice
//thats why in practice we use merge sort and quick sort more than heap sort