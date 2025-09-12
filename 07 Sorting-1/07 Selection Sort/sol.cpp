#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // running the loop n-1 times as the last element will be automatically sorted at the end
    {
        int min = i; // storing first element index as minimum element index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) // if we find a smaller element than the current minimum
            {
                min = j; // update the minimum index
            }
        }
        swap(arr[i], arr[min]); // swap the minimum element with the current element
    }
}

int main()
{
    int arr[] = {2, 6, 4, 7, 8, 1, 3};
    cout << "Before Sorting" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, 7);
    cout << "After Sorting" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}