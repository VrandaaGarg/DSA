#include <bits/stdc++.h>
using namespace std;

void fun1(int n)
{
    if (n == 0)
        return;
    fun1(n - 1);
    cout << n << " ";
}

void tailFun1(int n, int k = 1)
{
    if (n == 0)
        return;
    cout << k << " ";
    tailFun1(n - 1, k + 1);
}

// But we cant covert each and every non tail recursion to tail recursion
// Example: merge sort and quick sort
// quick sort is tail recursive but merge sort is not
// tht is why merge sort is slower than quick sort
// Example 2: preorder and inorder traversal are tail recursive but postorder is not

int main()
{
    int n = 5;
    fun1(n);
    cout << endl;
    tailFun1(n);
    return 0;
}