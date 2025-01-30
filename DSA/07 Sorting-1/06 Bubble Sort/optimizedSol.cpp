#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false; // To check if any swapping is done in the inner loop
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // If the element is greater than the next element, then swap them
            {
                swap(arr[j], arr[j + 1]);
                swapped = true; // If swapping is done, then set swapped to true
            }
        }
        if (!swapped) // If no swapping is done in the inner loop, then the array is already sorted
        {
            break;
        }
    } // means if array is sorted then it did linear time complexity
}
