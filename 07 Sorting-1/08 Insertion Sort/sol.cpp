// Example:
// I/P: [20,5,40,60,10,30]
// 1st iteration: [5,20,40,60,10,30]
//                 -
// 2nd iteration: [5,20,40,60,10,30]
//                 - -
// 3rd iteration: [5,20,40,60,10,30]
//                 - -  -
// 4th iteration: [5,20,40,60,10,30]
//                 - -  -  -
// 5th iteration: [5,10,20,40,60,30]
//                 - -  -  -  -
// 6th iteration: [5,10,20,30,40,60]
//                 - -  -  -   -  -
// O/P: [5,10,20,30,40,60]

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = i;     // current
        int j = i - 1; // current-1

        while (j >= 0 && arr[x] < arr[j])
        {

            swap(arr[j], arr[x]);
            x--;
            j--;
        }
    }
}

int main()
{
    int arr[] = {20, 5, 40, 60, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    InsertionSort(arr, n);

    cout << "\nAfter Sorting: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}