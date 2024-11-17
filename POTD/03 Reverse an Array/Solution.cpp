// https://www.geeksforgeeks.org/problems/reverse-an-array/1

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        int start = 0, end = arr.size() - 1;
        while (end > start)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};
