#include <bits/stdc++.h>
using namespace std;

// Works better than Lomuto partition
// Its not stable
// Both Lomuto and Hoare partition are not stable
// But naive partition is stable

// In this we consider the first element as the pivot element

int partition(int arr[], int l, int h)
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

// In lomuto we were fixing the correct position of the pivot element
// But in hoare it is not necessary that the pivot element is at its correct position
// In hoare partition we are not fixing the position of the pivot element

// In quick sort different parameters are passsed depending on the partition function whether it is lomuto or hoare
// But in general hoare partition takes less comparisons than lomuto partition

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = partition(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << x;
    return 0;
}