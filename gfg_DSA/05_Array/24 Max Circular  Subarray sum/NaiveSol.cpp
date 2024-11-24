#include <bits/stdc++.h>

using namespace std;

int maxCircular(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for (int j = 1; j < n; j++)
        {
            // i + j is used to get the circular array
            int index = (i + j) % n;

            // curr_sum is used to store the sum of the current subarray
            curr_sum += arr[index];

            // curr_max is used to store the maximum sum of the subarray
            curr_max = max(curr_max, curr_sum);
        }

        // res is used to store the maximum sum of the subarray
        res = max(res, curr_max);
    }
    return res;
}

// Time complexity: O(n^2)

int main()
{
    int arr[] = {8, -4, 3, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxCircular(arr, n);
    return 0;
}