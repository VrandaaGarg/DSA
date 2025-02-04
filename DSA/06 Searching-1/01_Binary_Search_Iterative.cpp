#include <bits/stdc++.h>
using namespace std;

// Given a sorted array and a number to be found we have to return the index ..
// If not present return -1
// If multiple occurance then return any one index

int Iterative(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] > k)
        {

            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

// Idea:
// If the element is greater than mid then we will search in the right part
// If the element is smaller than mid then we will search in the left part
// If the element is equal to mid then we will return the index

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 60;
    cout << Iterative(arr, n, k);
    return 0;
}