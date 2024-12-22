#include <bits/stdc++.h>
#include <stack> // include stack library

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30); // 10 20 30

    // print elements of stack
    while (s.empty() == false)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

// output: 30 20 10

// here the order of elements is reversed because stack follows LIFO order

// Time complexity: O(1) for push_back, pop_back, top, empty, size are provided by vector, deque, list
// by default stack is implemented using deque container
// It is container adapter class because it is implemented using other containers and work as an interface
// container like queue, priority_queue, stack are also container adapter class