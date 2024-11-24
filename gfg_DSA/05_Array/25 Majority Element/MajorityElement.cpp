#include <bits/stdc++.h>
using namespace std;

// Majority element if it appears more than n/2 times in an array
// n is the size of the array
// if n is odd then majority element will appear atleast n/2+1 times
// if n is even then majority element will appear atleast n/2+1 times
// Example if n=5 then majority element will appear atleast 3 times
// Example if n=6 then majority element will appear atleast 4 times

// Example: arr[] = {8,3,4,8,8} => 8 is the majority element
// so our output can be either 0 or 3 or 4
// Any index of 8 can be the output
// If there is no majority element then output will be -1

// Moore's Voting Algorithm
// Time complexity: O(n)
// Space complexity: O(1)

// works in 2 phases
// 1. Find the candidate for majority element
// 2. Check if the candidate is majority element
// 2nd phase is to check if the candidate is majority element or not
// This algo not always give the index of first occurence of majority element

int majorityElement(int arr[], int n)
{

    // in this 1st phase we are finding the candidate for majority element
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    // in this 2nd phase we are checking if the candidate is majority element or not
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
    }
    if (count <= n / 2)
        return -1;
    return res;
}

int main()
{
    int arr[] = {8, 3, 4, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of Majority Element: " << majorityElement(arr, n);
    return 0;
}