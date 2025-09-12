#include <bits/stdc++.h>
using namespace std;

int HoarePartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j; // return the index of the element which is smaller than pivot
        swap(arr[i], arr[j]);
    }
}

void qSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = HoarePartition(arr, l, h); // p is the position of element index which is just smaller than pivot
        qSort(arr, l, p);                  // as p is not at its correct position thats why it is from l to p
        qSort(arr, p + 1, h);              // and this is from p+1 to h
    }
}

// In quick sort your main function is partition function
// In merge sort your main function is merge function
// Hoare partition is much faster than omuto partition
// Some theory says that Hoare partition is 3 times faster than lomuto partition
// Its not stable

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    qSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}