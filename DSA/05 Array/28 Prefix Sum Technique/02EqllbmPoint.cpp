#include <bits/stdc++.h>
using namespace std;

// Equilibrium point is a position such that the sum of elements before it is equal to the sum of elements after it.
// arr[]={3,4,8,-9,20,6}
// Equilibrium point is 20
// so the output is YES
// arr[]={4,2,2}
// Output is NO

bool isEqllbmPoint(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        // sum - arr[i] is the right sum
        // Example: arr[]={3,4,8,-9,20,6}

        // if (l_sum == sum - arr[i] - l_sum) return true;
        if (l_sum == sum - arr[i])
        {
            return true;
        }
        // l_sum is the left sum
        l_sum += arr[i];

        sum -= arr[i]; // sum is the right sum
    }
    return false;
}

// Time complexity: O(n)
// Space complexity: O(1)

int main()
{
    int arr[] = {3, 4, 8, -9, 20, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isEqllbmPoint(arr, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
