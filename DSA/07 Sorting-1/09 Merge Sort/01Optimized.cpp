#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2) // compare the elements of both arrays and print the smaller one till one of the array is exhausted
    {
        if (arr1[i] <= arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while (i < n1) // if arr1 is not exhausted, print the remaining elements
    {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < n2) // if arr2 is not exhausted, print the remaining elements
    {
        cout << arr2[j] << " ";
        j++;
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, arr2, n1, n2);
    return 0;
}