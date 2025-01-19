#include <bits/stdc++.h>
#include <deque>
using namespace std;

// insert function has multiple form
// 1. insert(iterator, value) : insert value before the iterator

int main()
{
    deque<int> dq = {10, 15, 30, 5, 12};
    auto it = dq.begin(); // begin() returns an iterator pointing to the first element
    it++;
    dq.insert(it, 20); // 20 will be inserted before 15
    for (auto x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
    dq.pop_front(); // pop_front() removes the first element
    dq.pop_back();  // pop_back() removes the last element
    for (auto x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << dq.size() << endl;
    return 0;
}