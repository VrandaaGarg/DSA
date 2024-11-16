#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> &arr, int n)
{
    int temp = arr[0];
    vector<int> res;
    for (int i = 1; i < arr.size(); i++)
    {
        res.push_back(arr[i]);
    }
    res.push_back(temp);

    return res;
}
