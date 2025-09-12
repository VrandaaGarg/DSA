#include <bits/stdc++.h>
using namespace std;

int RecursiveBinarySearch(int arr[], int l, int h, int k)
{
    int mid = (l + h) / 2;

    if (l > h) // Base condition
    {
        return -1;
    }

    if (k < arr[mid])
    {
        RecursiveBinarySearch(arr, l, mid - 1, k);
    }
    else if (k > arr[mid])
    {
        RecursiveBinarySearch(arr, mid + 1, h, k);
    }
    else
    {
        return mid;
    }
}
// Iterative Approach and recursive both have logn(n) time complexity
// Recursive approach is not recommended because of the overhead of function calls
// Auxiliary space is O(logn) in recursive approach

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0;
    cout << RecursiveBinarySearch(arr, 0, n - 1, k);
    return 0;
}
