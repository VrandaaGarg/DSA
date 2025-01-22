#include <bits/stdc++.h>
using namespace std;

// direct recursion: function calling itself
// indirect recursion: function calling another function and that function calling the first function

void fun1(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    fun1(n - 1);
}

int main()
{
    fun1(5);
    return 0;
}