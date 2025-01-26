#include <bits/stdc++.h>
using namespace std;

// This runs faster than the recursive solution
//  Time complexity: O(d) where d is the number of digits in the number
//  Space complexity: O(1)

int sol(int n)
{
    int res = 0;
    while (n % 10 != 0)
    {
        res = res + n % 10;
        n = n / 10;
    }

    return res;
}

int main()
{
    cout << sol(123);
    return 0;
}