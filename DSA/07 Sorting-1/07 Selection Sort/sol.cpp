#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2) always
// Space Complexity: O(1)
// Does less memory writes compared to Quick sort,Merge sort,Insertion sort etc.
// But cycle sort is optimal in terms of memory writes.
// Basic idea for heap sort
// Not stable because it changes the order of equal elements

// Where it is used?
//  1. When memory writes are costly
//  2. When we need to do minimum memory writes

// Idea:
// Find the minimum element in the array and swap it with the first element
// Find the minimum element in the remaining array and swap it with the second element
// Continue this process until the array is sorted

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // running the loop n-1 times as the last element will be automatically sorted at the end
    {
        int min = i; // storing first element index as minimum element index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) // if we find a smaller element than the current minimum
            {
                min = j; // update the minimum index
            }
        }
        swap(arr[i], arr[min]); // swap the minimum element with the current element
    }
}

int main()
{
    int arr[] = {2, 6, 4, 7, 8, 1, 3};
    cout << "Before Sorting" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, 7);
    cout << "After Sorting" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}