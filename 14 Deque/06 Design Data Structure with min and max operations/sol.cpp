#include <bits/stdc++.h>
using namespace std;

// Design Data Structure that supports following operations in O(1) time complexity:
// 1.insertMin(x) : Inserts x at the beginning of the deque assume x is minimum element.
// 2.insertMax(x) : Inserts x at the end of the deque assume x is maximum element.
// 3.getMin() : Returns minimum element from the deque.
// 4.getMax() : Returns maximum element from the deque.
// 5.extractMin() : Removes minimum element from the deque.
// 6.extractMax() : Removes maximum element from the deque.

struct MyDS
{
    deque<int> dq;
    void insertMin(int x)
    {
        dq.push_front(x);
    }

    void insertMax(int x)
    {
        dq.push_back(x);
    }

    int getMin()
    {
        return dq.front();
    }

    int getMax()
    {
        return dq.back();
    }

    void extractMin()
    {

        dq.pop_front();
    }

    void extractMax()
    {

        dq.pop_back();
    }
};

int main()
{
    MyDS dq;
    dq.insertMin(10);
    dq.insertMin(2);
    dq.insertMax(20);
    dq.insertMax(30);
    cout << dq.getMin() << endl;
    cout << dq.getMax() << endl;
    dq.extractMin();
    cout << dq.getMin() << endl;
    dq.extractMax();
    cout << dq.getMax() << endl;
    return 0;
}
