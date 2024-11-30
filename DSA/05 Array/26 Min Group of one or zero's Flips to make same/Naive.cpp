#include <bits/stdc++.h>
using namespace std;

void minFlipGrp(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    int i = 0;
    if (arr[0] == 0)
    {
        zeroCount = 1;
    }
    else
    {
        oneCount = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 1 && arr[i - 1] == 0)
        {
            oneCount++;
        }
        else if (arr[i] == 0 && arr[i - 1] == 1)
        {
            zeroCount++;
        }
    }
    int res;
    if (oneCount > zeroCount)
    {
        res = 0;
    }
    else if (zeroCount > oneCount)
    {
        res = 1;
    }

    int start, end;

    if (arr[0] == res)
    {
        start = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == res && arr[i - 1] != res)
        {
            start = i;
        }
        if (arr[i] == res && arr[i + 1] != res)
        {
            end = i;
            printf("from %d to %d\n", start, end);
        }
    }

    return;
}

int main()
{
    int arr1[] = {1, 1, 0, 0, 0, 1};
    int arr2[] = {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1};
    int arr3[] = {1, 1, 1};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    minFlipGrp(arr1, n);
    n = sizeof(arr2) / sizeof(arr2[0]);
    minFlipGrp(arr2, n);
    n = sizeof(arr3) / sizeof(arr3[0]);
    minFlipGrp(arr3, n);
    return 0;
}
