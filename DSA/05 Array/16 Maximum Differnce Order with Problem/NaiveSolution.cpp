#include <bits/stdc++.h>
using namespace std;

int MaxDiff(int arr[], int n)
{
    int Diff = arr[n - 1] - arr[n - 2];
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            // if ((arr[i] - arr[j]) > Diff)
            // {
            //     Diff = arr[i] - arr[j];
            // }      OR
            Diff = max(Diff, arr[i] - arr[j]);
        }
    }

    return Diff;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    int arr[5] = {1, 4, 6, 2};
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[4] = {30, 10, 8, 2};
    cout << MaxDiff(arr, 5) << "\n";
    cout << MaxDiff(arr2, 5) << "\n";
    cout << MaxDiff(arr3, 4) << "\n";
    return 0;
}