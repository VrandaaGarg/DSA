#include <bits/stdc++.h>
#include <deque>
using namespace std;

// In other languages deque is implemenated as doubly linked list
// In C++ deque is implemented as dynamic array
// So it guarantees random access
// so it allows arbitrary inerstion in O(1) time

// push_front() : insert element at the front
// push_back() : insert element at the back
// front() : access the first element
// back() : access the last element

int main()
{
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(40);
    for (auto x : dq) // using for each loop
    {                 // traversal
        cout << x << " ";
    }
    cout << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    return 0;
}