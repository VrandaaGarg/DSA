#include <bits/stdc++.h>
using namespace std;

// First check input array conatin atleat 2 elements
// then find mid of array
// then we recursively call mergeSort for left and right half of array
// then we call merge function to merge the left and right half of array
//  left and right index of array are passed to merge function

// this function is used to merge the left and right half of array
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1; // size of left array
    int n2 = r - m;     // size of right array
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
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
}

// this function is used to divide the array into two halves and call merge function to merge the left and right half of array
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
