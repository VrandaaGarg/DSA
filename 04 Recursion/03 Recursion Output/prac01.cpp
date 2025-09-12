#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    fun(n - 1);
    cout << n << endl;
    return;
}

int main()
{
    fun(3);
    return 0;
}