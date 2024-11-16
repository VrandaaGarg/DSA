#include <bits/stdc++.h>
using namespace std;
int maxDifference(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int maxRes = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] > maxRes)
        {
            maxRes = arr[i] - arr[i - 1];
        }
    }
    return maxRes;
}
