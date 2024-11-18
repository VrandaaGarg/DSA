#include <bits/stdc++.h>
using namespace std;

// Based on the concept of Kadane's Algorithm
// We begin traversing from the second element of the array (i=1)
// For every element there are two cases:
// 1. Either u begin a new sub array
// 2. Or u extend the previous sub array if current element is alternating with the previous element

int maxLength(int arr[], int n)
{
    int length = 1;
    int prevLength = 1;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            prevLength++;
        }
        else
        {
            length = max(prevLength, length);
            prevLength = 1;
        }
    }
    length = max(prevLength, length);
    return length;
}

// Time Complexity: O(n)

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};
    int arr2[] = {10, 12, 14, 7, 8};
    int arr3[] = {7, 10, 13, 14};
    int arr4[] = {10, 12, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxLength(arr, n);

    cout << endl;
    n = sizeof(arr2) / sizeof(arr2[0]);
    cout << maxLength(arr2, n);
    cout << endl;
    n = sizeof(arr3) / sizeof(arr3[0]);
    cout << maxLength(arr3, n);
    cout << endl;
    n = sizeof(arr4) / sizeof(arr4[0]);
    cout << maxLength(arr4, n);

    return 0;
}