#include <bits/stdc++.h>
using namespace std;

// We are guven three indexes of a array -> low,mid,high
// We are guven that elements from low to mid are sorted and elements from mid+1 to high are sorted
// We have to sort the elements from low to high
// low<=mid<high

// Time complexity O(n)
// Auxiliary space O(n)

void merge(int arr[], int low, int mid, int high, int n)
{
    int n1 = mid - low + 1; // size of left array
    int n2 = high - mid;    // size of right array
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) // compare the elements of both arrays and print the smaller one till one of the array is exhausted
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) // if left array is not exhausted, print the remaining elements
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) // if right array is not exhausted, print the remaining elements
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge(arr, 0, 3, 7, n);
    return 0;
}