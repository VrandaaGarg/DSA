#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// T(n) = T(n-1) + O(1)
// Auxiliary Space: O(n) for recursive stack

void printNto1(int n)
{
    if (n == 0) // base case
    {
        return;
    }
    cout << n << " "; // print the current and then call fun with n-1
    printNto1(n - 1);
}

int main()
{
    printNto1(9);
    return 0;
}