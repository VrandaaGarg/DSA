#include <bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
    int i; //variable to store the index of the element to be deleted

    // Search x in array and setting i = index of x
    for (i = 0; i < n; i++){
        if (arr[i] == x)
        break;
    }

    if (i == n) // Element not found
        return n; //returning the size of the array

    // Deleting x from array
    for (int j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];

    return n - 1; //returning the size of the array
}

int main()
{
    int i;
    int arr[] = {10, 50, 30, 40, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    n = deleteElement(arr, n, x); //n is the size of the array after deletion

    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Time Complexity: theta(n)