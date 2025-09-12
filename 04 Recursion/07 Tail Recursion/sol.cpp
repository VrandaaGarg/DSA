#include <bits/stdc++.h>
using namespace std;

void fun1(int n) // prints 1 to n
{
    if (n == 0)
        return;
    cout << n << " ";
    fun1(n - 1);
}

// modern compiler
//  they add go to start internally

// void fun1(int n)
//{
//     start:
//     if (n == 0)
//         return;
//     cout << n << " ";
//     n=n-1;
//     goto start;
// }

// they remove recursion completely
// this is called tale call elimination
// modern complier do this to optimize the code

void fun2(int n) // prints n to 1
{
    if (n == 0)
        return;
    fun2(n - 1);
    cout << n << " ";
}

// fun1 comparatively takes less time on modern compilers because of tail recursion optimization
// In tail rescursion,after the recursive call, there is no statement to execute.
// means after the execution of child function,parents func has nothing to do.
// A function is called tail recursive when the recursive call is the last thing executed by the function.
// here the caller doesnt not have to save the state.

int main()
{
    int n = 5;
    fun1(n);
    cout << endl;
    fun2(n);
    return 0;
}