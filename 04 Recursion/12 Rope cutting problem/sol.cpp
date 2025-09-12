#include <bits/stdc++.h>
using namespace std;

// Problem:
// Given a rope of length n, you need to find the maximum number of pieces you can make such that the length of each piece is in the set {a,b,c} for the given values of a,b,c.

// Example:
// Input: n=5, a=2, b=5, c=1
// Output: 5
// Explanation: We can cut the rope into 5 pieces of length 1 each.

// Returns the maximum number of pieces that can be made and -1 if no such piece can be made

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
        return -1;

    int res = max({maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c)});
    if (res == -1)
        return -1;

    return res + 1;
}

// Time complexity: O(3^n)
// It has better solution using dynamic programming

int main()
{
    int n = 23, a = 11, b = 9, c = 12;
    cout << maxPieces(n, a, b, c) << endl;
    return 0;
}