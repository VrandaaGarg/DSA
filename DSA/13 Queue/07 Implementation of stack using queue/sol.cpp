#include <bits/stdc++.h>
#include <queue>
using namespace std;

// In Stack
// top() gives the top element of the stack means the element which is pushed at the last
// size() gives the size of the stack
// pop() removes the top element of the stack
// push() adds the element at the top of the stack

// In Queue
// front() gives the front element of the queue means the element which was pushed at the first
// back() gives the back element of the queue means the element which was pushed at the last
// size() gives the size of the queue
// empty() checks whether the queue is empty or not

struct MyStack
{
    queue<int> q1, q2;
    int top()
    {
        if (q1.empty() == true)
        {
            return -1;
        }
        return q1.front();
    }

    int size()
    {
        return q1.size();
    }

    int pop()
    {
        if (q1.empty())
        {
            return -1;
        }

        int x = q1.front();
        q1.pop();
        return x;
    }

    int push(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.size() << endl;
    return 0;
}