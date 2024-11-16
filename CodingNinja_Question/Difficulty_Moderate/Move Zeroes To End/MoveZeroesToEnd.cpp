#include <bits/stdc++.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr)
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