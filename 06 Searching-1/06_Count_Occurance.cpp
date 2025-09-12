#include <bits/stdc++.h>
using namespace std;

// Given a sorted array and we have to find the occurance of a given number

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

int LastOcurrance(int arr[], int n, int k)
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

int countOcc(int arr[], int n, int k)
{
    int first = IterativeFirstOccurance(arr, n, k);
    if (first == -1)
    {
        return 0;
    }
    else
    {
        return (LastOcurrance(arr, n, k) - first + 1);
    }
}

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 20;
    cout << countOcc(arr, n, k);
    return 0;
}