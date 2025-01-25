#include <bits/stdc++.h>
using namespace std;

// 0,1,1,2,3,5
// n>=0

int nthFibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

int main()
{
    cout << nthFibonacci(5);
    return 0;
}