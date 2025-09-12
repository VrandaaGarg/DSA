#include <bits/stdc++.h>
using namespace std;

// Returning a perfect square root
// If the input no. is not a square no. then returning floor of the square root

// Time Complexity: O(sqrt(x))
int naiveSol(int x)
{
    int i = 1;
    while (i * i <= x)
    {
        i++;
    }
    return i - 1;
}

int SqaureRoot(int x)
{
    if (x < 0)
    {
        cout << "Negative value not allowed" << endl;
        return -1;
    }
    int l = 0, h = x, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (mid * mid > x)
        {
            h = mid - 1;
        }
        else if (mid * mid < x)
        {
            if ((mid + 1) * (mid + 1) > x)
            {
                return mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        else
        {
            return mid;
        }
    }
}

// Sir sol
int sol(int x)
{
    int l = 1, h = x, ans;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        int msq = mid * mid;
        if (msq == x)
        {
            return mid;
        }
        else if (msq > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int x = 10;
    cout << sol(x) << endl;
    return 0;
}