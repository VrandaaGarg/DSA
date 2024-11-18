#include <bits/stdc++.h>
using namespace std;

// For every element in arr we find the max sum of elements for that particular element
// Then we find the max of all the sums

int maxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
// dry run
// Example arr[]={-3,8,-2,4,-5,6}
// maxEnding=8
// res=8
// maxEnding=6
// res=8
// maxEnding=10
// res=10
// maxEnding=5
// res=10
// maxEnding=11
// res=11

// Time Complexity: O(n)
// Auxiliary Space: O(1)

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int arr2[] = {-1, -2, -3, -4};
    int arr3[] = {1, -2, 3, -1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);
    int res = maxSum(arr, n);
    cout << res;

    cout << endl;

    n = sizeof(arr2) / sizeof(arr[0]);
    res = maxSum(arr2, n);
    cout << res;
    cout << endl;

    n = sizeof(arr3) / sizeof(arr[0]);
    res = maxSum(arr3, n);
    cout << res;

    return 0;
}