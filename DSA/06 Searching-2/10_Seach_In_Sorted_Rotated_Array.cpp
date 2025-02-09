#include <bits/stdc++.h>
using namespace std;

// The array is sorted as well as rotated
// We dont know by which is it rotated

int BinarySearch(int arr[], int l, int h, int x)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int Search(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2; // like normal binary seach
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[l] < arr[mid]) // left half sorted
        {
            if (x >= arr[l] && x < arr[mid]) // when we have to consider left half
            {
                h = mid - 1; //
            }
            else // when we have to consider right half
            {
                l = mid + 1;
            }
        }
        else // right half sorted
        {
            if (x > arr[mid] && x <= arr[h]) // when we have to consider right half
            {
                l = mid + 1;
            }
            else // when we have to consider left half
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}