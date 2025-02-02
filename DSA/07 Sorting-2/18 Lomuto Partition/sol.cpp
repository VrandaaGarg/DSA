#include <bits/stdc++.h>
using namespace std;

// Works by traversing input array just once
// Time complexity: O(n)
// Auxillary space: O(1)

// here we are assuming pivot always as last element
// We insure that on left side we have elements less than pivot and on right side we have elements greater or equal to pivot
// If we see a no. less than pivot we swap it with the first element and do i++

// Corner case:
// when pivot is smallest element

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

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    partition(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << partition(arr, 0, n - 1);
    return 0;
}

// To handle the case when pivot is not the last element:
// then just simply swap the pivot with the last element and then do the same thing as above