#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1; // i as window of smaller elements than pivot
    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++; // if we see a no. less than pivot, we swap it with the first greater element which is at i+1 and increase window size
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void qSort(int arr[], int l, int h)
{
    if (l < h) // if l becomes equal to h, it means we have only one element left and it is already sorted
    {
        int p = partition(arr, l, h); // p is the new position of pivot element
        qSort(arr, l, p - 1);         // recursive call for left part
        qSort(arr, p + 1, h);         // recursive call for right part
    }
}

// This recursive will sort in such a manner
// first placing pivot element right
// then left array ke left side sort
// the left array ke right side sort
// then right array ke left side sort
// then right array ke right side sort

int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    qSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}