#include <bits/stdc++.h>
using namespace std;

// Interesting fact:
// The difference btw the one and zero's grp can either be 1 or 0
// If beginning and end of array is ame then diff is 1
// If beginning and end of array is different then diff is 0
// So if we flip second group elements in array then we can make all groups same

void print(bool arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // If the current element is different from the previous element
        if (arr[i] != arr[i - 1])
        {

            // If the current element is different from the first element
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            } // if the current element is same as the first element
            else
            {
                cout << i - 1 << endl;
            }
        }
    }
    // If the last element is different from the first element
    if (arr[n - 1] != arr[0])
    {
        cout << n - 1 << endl;
    }
}

int main()
{
    bool arr[] = {0, 1, 0, 0, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    return 0;
}
