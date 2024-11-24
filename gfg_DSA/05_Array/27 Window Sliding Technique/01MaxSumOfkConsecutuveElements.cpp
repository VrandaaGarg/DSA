#include <bits/stdc++.h>
using namespace std;

int Solution(int arr[], int n, int k)
{
    int sum = 0;
    int currSum = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        currSum = arr[i] + arr[i + 1] + arr[i + 2];
        sum = max(currSum, sum);
    }
    return sum;
}

// Time complexity: O(n)
// Space complexity: O(1)

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << Solution(arr, n, k);
    return 0;
}