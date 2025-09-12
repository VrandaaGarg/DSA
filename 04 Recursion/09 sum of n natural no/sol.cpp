#include <bits/stdc++.h>
using namespace std;

int sumOfNaturalNo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfNaturalNo(n - 1);
}
// Time complecity: O(n)
// T(n)=T(n-1)+O(1)
// Auxilary space: O(n)

// or using formula: sum=n(n+1)/2

int main()
{
    cout << sumOfNaturalNo(10);
    return 0;
}