#include <bits/stdc++.h>
using namespace std;

// Sort is a generic function that can be used to sort any type of input
// Mainly used for sorting data which allows random access
// Example: array,vector,deque etc

// Sort function internally uses quick sort algorithm
// Hybrid of quick, heap and insertion sort
// Time Complexity: O(nlogn)

int main()
{
    int arr[] = {1, 5, 3, 2, 4};

    sort(arr, arr + 5); // sort(a,b) where a is the starting index and b is the beyond the last index
    // Sort in increasing order by default
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Greater func sort such that the greater element comes first
    sort(arr, arr + 5, greater<int>()); // sort in decreasing order
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
