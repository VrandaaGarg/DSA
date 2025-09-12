#include <bits/stdc++.h>
using namespace std;

// Infinite size sorted array

// Time complexity: O(positional index of x)
// Space complexity: O(1)
int NaivveSearch(int arr[], int x)
{
    int i = 0;
    while (arr[i] < x)
    {
        i++;
    }

    if (arr[i] == x)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

///////////Optimized sol////////////

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

// Time complexity: O(log(positional index of x))
int Search(int arr[], int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }
    if (arr[i] == x)
    {
        return i;
    }
    return BinarySearch(arr, i / 2 + 1, i - 1, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 10, 12, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15};
    int x = 8;
    cout << Search(arr, x);
    cout << endl;
    cout << Search(arr2, x);
    return 0;
}