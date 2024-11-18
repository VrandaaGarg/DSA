#include <bits/stdc++.h>
using namespace std;

// Example arr[]={1,2,3}
// SubArrays={1},{1,2},{1,2,3},{2},{2,3},{3}
// Remember that the subarray is contiguous
// So {1,3} is not a subarray of {1,2,3}

int MaxSum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int currentmax = 0;
        for (int j = i; j < n; j++)
        {
            currentmax = currentmax + arr[j];
            res = max(res, currentmax);
        }
    }
    return res;
}

// Time Complexity: O(n^2)
// Auxiliary Space: O(1)

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int arr2[] = {-1, -2, -3, -4};
    int arr3[] = {1, -2, 3, -1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);
    int res = MaxSum(arr, n);
    cout << res;

    cout << endl;

    n = sizeof(arr2) / sizeof(arr[0]);
    res = MaxSum(arr2, n);
    cout << res;
    cout << endl;

    n = sizeof(arr3) / sizeof(arr[0]);
    res = MaxSum(arr3, n);
    cout << res;

    return 0;
}