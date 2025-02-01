#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2)
{
    int arr[n1 + n2];
    int n = n1 + n2;
    int i = 0;
    int x1 = 0, x2 = 0;
    while (i < n)
    {
        if (x1 < n1 && (x2 >= n2 || arr1[x1] <= arr2[x2]))
        {
            arr[i] = arr1[x1];
            x1++;
        }
        else
        {
            arr[i] = arr2[x2];
            x2++;
        }

        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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