#include <bits/stdc++.h>
using namespace std;

// for n>0
//  In actual this function is converting decimal to binary
// we keep on dividing the number by 2 and keep on printing the remainder
// and then print the remainders in reverse order

// Example: 10
// 10/2=5 remainder=0
// 5/2=2 remainder=1
// 2/2=1 remainder=0
// 1/2=0 remainder=1
// so the binary of 10 is 1010

void fun(int n)
{
    if (n == 0)
        return;
    fun(n / 2);
    cout << n % 2;
}

int main()
{
    fun(9); // 111
    return 0;
}