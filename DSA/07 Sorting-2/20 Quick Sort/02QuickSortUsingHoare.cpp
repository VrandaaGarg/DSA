#include <bits/stdc++.h>
using namespace std;

int HoarePartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1; // is as -1 and j has size of array
    while (true)              // stop when i and j cross each other
    {
        do
        {
            i++;
        } while (arr[i] < pivot); // find the element greater than pivot
        do
        {
            j--;
        } while (arr[j] > pivot); // find the element smaller than pivot
        if (i >= j)
            return j;         // return the index of the element which is smaller than pivot
        swap(arr[i], arr[j]); // swap the elements
    }
}

void qSort(int arr[], int l, int h)
{
    if (l < h) // if l becomes equal to h, it means we have only
    {
        int p = HoarePartition(arr, l, h); // p is the new position of pivot element
        qSort(arr, l, p);                  // as p is not at its correct position thats why it is from l to p
        qSort(arr, p + 1, h);              // and this is from p+1 to h
    }
}

// In quick sort your main function is partition function
// In merge sort your main function is merge function

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    qSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}