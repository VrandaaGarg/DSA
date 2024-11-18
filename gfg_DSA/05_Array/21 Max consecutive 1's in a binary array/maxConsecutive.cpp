#include <bits/stdc++.h>
using namespace std;

int MaxConsecutiveOne(int arr[], int n)
{
    int maxOne = 0, currentOne = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            currentOne++;
        }
        else
        {
            if (currentOne > maxOne)
            {
                maxOne = currentOne;
                currentOne = 0;
            }
            // OR
            //  maxOne = max(maxOne, currentOne);
            //  currentOne = 0;
        }
    }
    return maxOne;
}

// Time Complexity: O(n)
// Auxiliary Space: O(1)

int main()
{
    int arr[] = {1, 1, 0, 0, 0, 1};
    int arr2[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    int arr3[] = {0, 0, 0, 0};

    int n = sizeof(arr) / sizeof(arr[0]);
    int res = MaxConsecutiveOne(arr, n);
    cout << res;

    cout << endl;

    n = sizeof(arr2) / sizeof(arr[0]);
    res = MaxConsecutiveOne(arr2, n);
    cout << res;
    cout << endl;

    n = sizeof(arr3) / sizeof(arr[0]);
    res = MaxConsecutiveOne(arr3, n);
    cout << res;

    return 0;
}