#include <bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;

// Iterative approach
// We will use stack to reverse the queue

void reverse(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
        // or s.push(q.pop());
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
        // or q.push(s.pop());
    }
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
