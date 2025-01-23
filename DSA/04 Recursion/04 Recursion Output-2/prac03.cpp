#include <bits/stdc++.h>
using namespace std;

// when n is power of 2 then fun(n) = log2(n)
// when n is not power of 2 then fun(n) = log2(n) + 1
// fun(16) = 4
// fun(17)=fun(8)+1
// fun(18)=fun(9)+1=(fun(4)+1)+1

// fun(0)=0
// fun(1)=1
// fun(2)=fun(1)+1=1+1=2
// fun(3)=fun(1)+1=1+1=2
// fun(4)=fun(2)+1=2+1=3
// fun(5)=fun(2)+1=2+1=3
// fun(6)=fun(3)+1=(fun(1)+1)+1=1+1+1=3
// fun(7)=fun(3)+1=(fun(1)+1)+1=1+1+1=3
// fun(8)=fun(4)+1=3+1=4

// so here you can see that till the power of 2 the answer remains the same as the power of 2
int fun(int n)
{
    if (n == 1)
        return 0;
    else
        return (1 + fun(n / 2));
}

int main()
{
    cout << fun(16); // 4
    return 0;
}