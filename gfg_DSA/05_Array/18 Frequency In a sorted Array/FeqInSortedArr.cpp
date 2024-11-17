#include <bits/stdc++.h>
using namespace std;

void PrintFeqOfElements(int arr[], int n)
{
    int feq = 0;
    int prev = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (prev == arr[i])
        {
            feq++;
        }
        else if (prev != arr[i])
        {
            cout << prev << " " << feq << "\n";
            feq = 1;
            prev = arr[i];
        }

        if (i == n - 1)
        {
            cout << prev << " " << feq << "\n";
        }
    }
}

// Time Complexity: O(n)

int main()
{
    int arr[5] = {10, 10, 10, 10, 10};
    int main[6] = {10, 10, 10, 20, 20, 30};
    int One[1] = {10};

    PrintFeqOfElements(arr, 5);
    PrintFeqOfElements(main, 6);
    PrintFeqOfElements(One, 1);
    return 0;
}