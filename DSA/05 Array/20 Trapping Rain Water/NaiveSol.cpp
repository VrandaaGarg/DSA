#include <bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int imax = arr[i];
        for (int j = 0; j < i; j++)
        {
            imax = max(imax, arr[j]);
        }
        int jmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            jmax = max(jmax, arr[j]);
        }
        res += min(imax, jmax) - arr[i];
    }
    return res;
}

// Time complexity: O(n^2)

int main()
{
    int arr[] = {3, 0, 0, 2, 0, 4};
    int arr2[] = {3, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getWater(arr2, 4);
    cout << endl;
    cout << getWater(arr, n);

    return 0;
}