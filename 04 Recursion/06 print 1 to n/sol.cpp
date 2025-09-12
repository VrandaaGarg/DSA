#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// T(n) = T(n-1) + O(1)
// Auxiliary Space: O(n) for recursive stack
void print1toN(int n)
{
    if (n == 0)
    {
        return;
    }
    print1toN(n - 1);
    cout << n << " ";
}

// here we are using i as a parameter to keep track of the current number
// and n as the number till which we have to print
// void print(int n, int i)
// {

//     if (i > n)
//     {
//         return;
//     }
//     cout << i << " ";
//     i++;
//     print(n, i);
// }

int main()
{

    print1toN(10);
    // cout << endl;
    // print(10, 1);
    return 0;
}