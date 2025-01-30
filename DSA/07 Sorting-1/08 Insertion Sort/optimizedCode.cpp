#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) // if we put >= it will make the code unstable as it will swap the elements which are equal
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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