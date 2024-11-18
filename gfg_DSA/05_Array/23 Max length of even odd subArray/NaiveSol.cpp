#include <bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int current = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
            {
                current++;
                res = max(res, current);
            }
            else
            {
                break;
            }
        }
        res = max(res, current);
    }
    return res;
}

// Time Complexity: O(n^2)

int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int arr2[] = {7, 10, 13, 14};
    int arr3[] = {10, 12, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxEvenOdd(arr, n);

    cout << endl;
    n = sizeof(arr2) / sizeof(arr2[0]);
    cout << maxEvenOdd(arr2, n);
    cout << endl;
    n = sizeof(arr3) / sizeof(arr3[0]);
    cout << maxEvenOdd(arr3, n);

    return 0;
}