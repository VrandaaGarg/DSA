#include <bits/stdc++.h>
using namespace std;

int Solution(int arr[], int n)
{
    //{1,5,3,8,12}=(5-1)+(12-3)=13
    int min = arr[0]; // 1
    int max = arr[0]; // 1
    int diff = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i < n && arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            diff = diff + (max - min);
            min = arr[i];
            max = arr[i];
        }
    }

    return diff;
}

// Time Complexity: O(n)

int main()
{
    int arr[5] = {1, 5, 3, 8, 12};
    int arr2[3] = {39, 20, 10};
    int arr3[6] = {1, 5, 3, 1, 2, 8};
    cout << Solution(arr, 5);
    cout << "\n";
    cout << Solution(arr2, 3);
    cout << "\n";
    cout << Solution(arr3, 6);
    return 0;
}