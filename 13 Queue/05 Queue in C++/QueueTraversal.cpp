#include <bits/stdc++.h>
#include <queue>
using namespace std;

// basically jab tak q empty ni ho jati print front then pop
// so queue empty hote hi bahar aa jaenge

// Time Complexities: O(1) for all operations.
// only two continer provide queue data structure that is list and dequeue as they have push_back and pop_front functions of O(1) time complexity
// Among these two if we do not specify which container then queue is by default implemented using dequeue container
// So queue is a Container Adapter in C++ STL which is implemented using an Adaptor Design Pattern
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
}