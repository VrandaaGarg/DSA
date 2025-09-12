#include <bits/stdc++.h>
using namespace std;

// Idea is:
// That we are given the index of one of the element of the array and we have to place elements less than that element to the left of it and elements greater than that element to the right of it.
// Equal one should come left of the element.

// Elements placed at the left or right may or may not be sorted.
// but the p element will be at its correct position.

// Time Complexity: O(n)
// Space Complecity: O(n)

void partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    int pivot = arr[p];
    for (int i = l; i <= h; i++) // Copying the elements less than pivot to temp array
    {
        if (arr[i] <= pivot)
        {
            temp[index++] = arr[i];
        }
    }
    for (int i = l; i <= h; i++) // Copying the elements equal to pivot to temp array
    {
        if (arr[i] == pivot)
        {
            temp[index++] = arr[i];
        }
    }
    int pivotPos = l + index - 1; // Position of pivot element in temp array
    for (int i = l; i <= h; i++)  // Copying the elements greater than pivot to temp array
    {
        if (arr[i] > pivot)
        {
            temp[index++] = arr[i];
        }
    }
    for (int i = l; i <= h; i++) // Copying the temp array to original array
    {
        arr[i] = temp[i - l];
    }
}

int main()
{
    int arr[] = {5, 13, 6, 9, 12, 11, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    partition(arr, 0, 6, 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
