#include <bits/stdc++.h>
using namespace std;

// n%10 gives the last digit of the number
// n/10 gives the number without the last digit

// Time complexity: O(d) where d is the number of digits in the number
// Space complexity: O(d) where d is the number of digits in the number

int SumOfDigits(int n)
{
    if (n / 10 == 0)
    {
        return n;
    }

    return n % 10 + SumOfDigits(n / 10);
}

int main()
{
    cout << SumOfDigits(873);
    return 0;
}