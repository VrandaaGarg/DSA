#include <bits/stdc++.h>
using namespace std;

// Is this tail recursive?
// No, because the recursive call is not the last statement
// because for every call u need the result of child call

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int fact2(int n, int k) // This is the equivalent tail recursive code for finding factorial
{                       // initially k=1
    if (n == 0 || n == 1)
        return k;
    return fact2(n - 1, n * k);
}