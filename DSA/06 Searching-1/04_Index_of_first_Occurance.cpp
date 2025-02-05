#include <bits/stdc++.h>
using namespace std;

// In a sorted arry we have to find the index of first occurance of a number

int RecursiveFirstOcc(int arr[], int l, int h, int x)
{
    if (l > h)
    {
        return -1;
    }

    int mid = (l + h) / 2;

    if (arr[mid] < x)
    {
        RecursiveFirstOcc(arr, mid + 1, h, x);
    }
    else if (arr[mid] > x)
    {
        RecursiveFirstOcc(arr, l, mid - 1, x);
    }
    else
    {
        if (mid == 0 || arr[mid - 1] != x)
        {
            return mid;
        }
        else
        {
            RecursiveFirstOcc(arr, l, mid - 1, x);
        }
    }
}

int IterativeFirstOccurance(int arr[], int n, int k)
{
    int l = 0, h = n - 1, mid = (l + h) / 2;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] < k)
        {
            l = mid + 1;
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != k)
            {
                return mid;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}

// Iterative approach is recommended because of less space complexity

int main()
{
    int arr[] = {10, 20, 20, 30, 40, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    cout << RecursiveFirstOcc(arr, 0, n - 1, x);
    cout << endl;
    cout << IterativeFirstOccurance(arr, n, x);
    return 0;
}