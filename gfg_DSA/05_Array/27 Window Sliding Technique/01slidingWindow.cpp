#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], int n, int k)
{
    // arr[] = {1, 8, 30, -5, 20, 7}
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        // curr_sum = 1+8+30
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for (int i = k; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

// Time complexity: O(n)
// Space complexity: O(1)

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << solution(arr, n, k);
    return 0;
}