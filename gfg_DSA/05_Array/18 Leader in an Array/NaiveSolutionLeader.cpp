#include <bits/stdc++.h>
using namespace std;

// What is a Leader?
// An element is leader if it is greater than all the elements to its right side
// And the rightmost element is always a leader

// in ascending sorted array the only leader is last element
// In descending sorted array all elements are leaders

// If there is an element present on right side that is equal then even that is not a leader

vector<int> Leader(vector<int> arr)
{
    vector<int> leaders;
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] >= arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            leaders.push_back(arr[i]);
        }
    }

    return leaders;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 4, 2};
    vector<int> leaders = Leader(arr);
    for (int i = 0; i < leaders.size(); i++)
    {
        cout << leaders[i] << " ";
    }
    return 0;
}