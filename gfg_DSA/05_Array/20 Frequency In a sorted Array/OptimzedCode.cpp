#include <bits/stdc++.h>
using namespace std;

void PrintFeqOfElements(int arr[], int n)
{
    int feq = 1;

    for (int i = 1; i < n; i++)
    {
        if (i < n && arr[i] == arr[i - 1])
        {
            feq++;
        }
        else
        {
            cout << arr[i - 1] << " " << feq << "\n";
            feq = 1;
        }
    }
    cout << arr[n - 1] << " " << feq << "\n";
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