#include <bits/stdc++.h>
using namespace std;

// Example
// 2 10 8 7

// First pass : max element will be at the end
// 2 10 8 7
// 2 8 10 7
// 2 8 7 10

// Second pass: second max element will be at the second last position
// 2 8 7 10
// 2 7 8 10

// Third pass: array is sorted
// 2 7 8 10

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        for (int j = 0; j < n - i - 1; j++) // as the i elements are already sorted so we don't need to check them
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// void bubbleSort(int arr[], int n)
// {
//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

int main()
{
    int arr[] = {2, 10, 8, 7};
    bubbleSort(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
