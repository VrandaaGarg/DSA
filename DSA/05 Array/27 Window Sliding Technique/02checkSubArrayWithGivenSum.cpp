#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array of nonnegative integeers.Find if there is a subarray with given sum
// if allowed negatuve then this approach wont work

// Naive soluton

bool sol(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                return true;
            }
        }
    }
    return false;
}

// Time complexity: O(n^2)
// Space complexity: O(1)

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 33;
    cout << sol(arr, n, k);
    return 0;
}
