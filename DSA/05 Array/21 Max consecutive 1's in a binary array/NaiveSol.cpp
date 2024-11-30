#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(bool arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int current = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                current++;
            }
            else
            {
                break;
            }
        }
        res = max(res, current);
    }
    return res;
}

// Time Complexity: O(n^2)

int main()
{
    bool arr[] = {1, 1, 0, 0, 0, 1};
    bool arr2[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    bool arr3[] = {0, 0, 0, 0};

    int n = sizeof(arr) / sizeof(arr[0]);
    int res = maxConsecutive(arr, n);
    cout << res;

    cout << endl;

    n = sizeof(arr2) / sizeof(arr[0]);
    res = maxConsecutive(arr2, n);
    cout << res;
    cout << endl;

    n = sizeof(arr3) / sizeof(arr[0]);
    res = maxConsecutive(arr3, n);
    cout << res;

    return 0;
}