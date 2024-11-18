#include <bits/stdc++.h>
using namespace std;
string maximumDifference(int n, vector<int> &arr)
{
    int minEl = *min_element(arr.begin(), arr.end());

    int maxEl = *max_element(arr.begin(), arr.end());

    int diff = maxEl - minEl;

    if (diff % 2 == 0)
        return "EVEN";
    else
        return "ODD";
}