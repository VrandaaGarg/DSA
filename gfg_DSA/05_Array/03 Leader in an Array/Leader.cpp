#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n)
{
    vector<int> leads;

    // Last element is always a leader so add it to the leaders array
    int leader = arr[n - 1];
    leads.push_back(leader);

    // Start from the second last element
    for (int i = n - 2; i >= 0; i--)
    {
        // If current element is greater than leader
        if (arr[i] > leader)
        {
            // Update the leader and add it to the leaders array
            leads.push_back(arr[i]);
            leader = arr[i];
        }
    }
    return leads;
}

// Time Complexity: O(n)

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> leadersArray = leaders(arr, n);
    for (int i = leadersArray.size() - 1; i >= 0; i--)
    {
        cout << leadersArray[i] << " ";
    }
    return 0;
}