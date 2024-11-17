//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// https://www.geeksforgeeks.org/problems/second-largest3735/1
class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int res = -1, largest = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > largest)
            {
                res = largest;
                largest = arr[i];
            }
            else if (arr[i] != largest)
            {
                if (res == -1 || arr[i] > res)
                {
                    res = arr[i];
                }
            }
        }
        return res;
    }
};
