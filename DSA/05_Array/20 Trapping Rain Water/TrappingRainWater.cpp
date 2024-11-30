#include <bits/stdc++.h>
using namespace std;

// Array of non-negative integers means values from 0 to n
// Array elements represent height of the bar
// How much water can be trapped in between the bars

void WaterTrapped(int arr[], int n)
{

    // arr[]={5,0,6,2,3}
    // lmax[]={5,5,6,6,6}
    // rmax[]={6,6,6,3,3}

    int res = 0;
    // lmax[i] contains maximum height of bar from 0 to i
    // rmax[i] contains maximum height of bar from i to n-1
    int lmax[n], rmax[n];
    lmax[0] = arr[0];

    // Fill lmax array
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }

    rmax[n - 1] = arr[n - 1];

    // Fill rmax array
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }

    // Calculate the accumulated water
    for (int i = 1; i < n - 1; i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    cout << res;
}

// Time complexity: O(n)
// Auxiliary space: O(n)

int main()
{
    int arr[] = {3, 0, 0, 2, 0, 4};
    int arr2[] = {3, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    WaterTrapped(arr2, 4);
    cout << endl;
    WaterTrapped(arr, n);

    return 0;
}
