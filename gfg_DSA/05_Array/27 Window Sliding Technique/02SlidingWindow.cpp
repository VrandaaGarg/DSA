#include <bits/stdc++.h>

using namespace std;

// we start adding elements in arr[i] till the given sum is larger than the curr sum of subarray
// if the sum is larger than the given sum then we start removing elements from the start of the subarray
// till the sum is less than the given sum
// if the sum is equal to the given sum then we return true

bool sol(int arr[], int n, int k)
{
    int curr_sum = arr[0], start = 0;
    for (int end = 1; end <= n; end++)
    {
        // If curr_sum exceeds the sum, then remove the starting elements
        while (curr_sum > k && start < end - 1)
        {
            curr_sum -= arr[start];
            start++;
        }
        // If curr_sum becomes equal to sum, then return true
        if (curr_sum == k)
        {
            return true;
        }
        // Add this element to curr_sum
        if (end < n)
        {
            curr_sum += arr[end];
        }
    }
    return false;
}

// Time complexity: O(n)
// becuse we are traversing the array only once

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 33;
    cout << sol(arr, n, k);
    return 0;
}

// But this approach dosent work for negative numbers
// Example: {4,7,-3,1,2} sum=9
// Output: false
// Expected: true
// as 4+7-3+1=9