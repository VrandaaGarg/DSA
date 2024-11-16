#include <bits/stdc++.h>

using namespace std;

vector<int> findLeaders(vector<int> &elements, int n)
{
    vector<int> leads;

    // Last element is always a leader so add it to the leaders array
    int leader = elements[elements.size() - 1];
    leads.push_back(leader);

    // Start from the second last element
    for (int i = n - 2; i >= 0; i--)
    {
        // If current element is greater than leader
        if (elements[i] > leader)
        {
            // Update the leader and add it to the leaders array
            leads.push_back(elements[i]);
            leader = elements[i];
        }
    }

    reverse(leads.begin(), leads.end());
    return leads;
}