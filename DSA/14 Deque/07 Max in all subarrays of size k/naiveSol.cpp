#include <bits/stdc++.h>
using namespace std;

// example: arr[]={10,8,5,12,15,7,6}
// k=3
// O/P: 10 12 15 15 15

// total subbarays will be : n-k+1
// so there will be n-k+1 elements in output array

void printMaxk(int arr[], int n, int k)
{
    for (int i = 0; i < n - k + 1; i++)
    {
        int mx;
        for (int j = i; j < i + k; j++)
        {
            mx = max(arr[j], mx);
        }
        cout << mx << " ";
    }
}

// Time Complexity: O(n^2)