#include <bits/stdc++.h>
using namespace std;

void printFeq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << "\n";
        i++;
        freq = 1;
    }

    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1 << "\n";
    }
}

int main()
{
    int arr[5] = {10, 10, 10, 10, 10};
    int main[6] = {10, 10, 10, 20, 20, 30};

    printFeq(arr, 5);
    printFeq(main, 6);
    return 0;
}