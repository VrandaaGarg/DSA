#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n)
{
    // res will store the maximum difference between two elements
    int res = arr[1] - arr[0];

    // minVal will store the minimum value of the array
    int minVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        // check if the difference between the current element and the minimum value is greater than the result
        res = max(res, arr[i] - minVal);
        // update the minimum value
        minVal = min(minVal, arr[i]);
    }
    return res;
}

// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[5] = {1, 4, 6, 2};
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[4] = {30, 10, 8, 2};
    cout << maxDiff(arr, 5) << "\n";
    cout << maxDiff(arr2, 5) << "\n";
    cout << maxDiff(arr3, 4) << "\n";
    return 0;
}