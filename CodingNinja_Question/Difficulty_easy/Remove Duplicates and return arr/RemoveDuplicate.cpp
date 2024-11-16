#include <bits/stdc++.h>

using namespace std;

vector<int> removeDuplicates(vector<int> arr)
{
    // duplicate=false means no duplicate
    bool duplicate = false;

    vector<int> newArr;
    for (int i = arr.size() - 1; i >= 0; i--)
    {

        // checking for duplicate
        duplicate = false;
        for (int j = i - 1; j >= 0; j--)
        {
            // if duplicate found then break the loop
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        // if duplicate not found then push the element in new array
        if (duplicate == false)
        {
            newArr.push_back(arr[i]);
        }
    }
    // reverse the array
    reverse(newArr.begin(), newArr.end());
    return newArr;
}
