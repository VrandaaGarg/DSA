#include <bits/stdc++.h>
#include <queue>
using namespace std;

// In rucursive too we are internally using stack that is a function calling stack as in iteratuve we were using our explicit stack

void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }

    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    reverse(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}