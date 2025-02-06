#include <bits/stdc++.h>
using namespace std;

int RecursiveSol(int arr[], int l, int h, int k, int n)
{

    int mid = (l + h) / 2;
    if (l > h)
        return -1;

    if (arr[mid] > k)
    {
        return RecursiveSol(arr, l, mid - 1, k, n);
    }
    else if (arr[mid] < k)
    {
        return RecursiveSol(arr, mid + 1, h, k, n);
    }
    else
    {
        if (mid == n - 1 || arr[mid + 1] != k)
        {
            return mid;
        }
        else
        {
            return RecursiveSol(arr, mid + 1, h, k, n);
        }
    }
}

int IterativeSol(int arr[], int n, int k)
{
    int l = 0, h = n - 1, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            if (mid == n - 1 || arr[mid + 1] != k)
            {
                return mid;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 40, 50, 60, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 40;
    cout << RecursiveSol(arr, 0, n - 1, k, n);
    cout << endl;
    cout << IterativeSol(arr, n, k);
    return 0;
}