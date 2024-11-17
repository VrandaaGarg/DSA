// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        int count = 0; // count is used to keep track of non-zero elements

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[count]); // swap the non-zero element with the zero element
                count++;
            }
        }
    }
};
