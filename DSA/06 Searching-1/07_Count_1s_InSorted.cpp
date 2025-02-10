#include <bits/stdc++.h>
using namespace std;

// Its a binary array, we have to count the number of 1s in the array

// Naive sol:
// checking the last occ of 0 bcoz after that all will be 1.
// Worst case time complexity is O(n)

// Efficient sol:
// As it is sorted so we can use binary search
// Time complexity is O(logn)
// We can find last occ of 0

int CountOnes(int arr[], int n) // first occ of 1
{
    int l = 0, h = n - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == 0)
        {
            l = mid + 1;
        }
        else // arr[mid]==1
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return (n - mid);
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 1, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << CountOnes(arr, n);
    cout << endl;

    return 0;
}