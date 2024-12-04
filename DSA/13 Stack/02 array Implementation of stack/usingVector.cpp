#include <bits/stdc++.h>
using namespace std;

struct MyStack
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    // pop element from stack
    int pop()
    {
        if (v.empty()) // if stack is empty
        {
            cout << "UNDERFLOW\n";
            return -1;
        }
        int res = v.back(); //.back returns the last element of the vector
        v.pop_back();       //.pop_back removes the last element of the vector
        return res;
    }

    int peep()
    {
        return v.back();
    }

    int size()
    {
        return v.size(); //.size() returns the size of the vector
    }

    bool isEmpty()
    {
        return v.empty(); //.empty() returns true if the vector is empty
    }
};

int main()
{
    MyStack v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    cout << "peep: " << v.peep() << endl;
    cout << "popped: " << v.pop() << endl;
    cout << "peep: " << v.peep() << endl;
    cout << "size: " << v.size() << endl;
    cout << "empty? " << v.isEmpty() << endl;
    return 0;
}