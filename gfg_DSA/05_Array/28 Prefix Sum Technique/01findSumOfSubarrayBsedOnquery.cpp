#include <bits/stdc++.h>
using namespace std;

// arr[]={2,8,3,9,6,5,4}
// prefix sum arr={2,10,13,22,28,33,37}

int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    int l = 2, r = 5;
    if (l != 0)
    {
        cout << prefixSum[r] - prefixSum[l - 1];
    }
    else
    {
        cout << prefixSum[r];
    }
    return 0;
}