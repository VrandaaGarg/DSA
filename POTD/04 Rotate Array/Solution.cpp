// https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int> &arr, int d)
    {
        int n = arr.size();
        d = d % n;
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};
