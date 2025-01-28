#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 5, 3, 2, 4};

    // Sort in increasing order by default
    sort(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Greater func sort such that the greater element comes first
    // So it will sort in decreasing order
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}