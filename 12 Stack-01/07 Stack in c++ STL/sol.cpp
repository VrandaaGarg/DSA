#include <bits/stdc++.h>
#include <stack> // include stack library

using namespace std;

int main()
{
    stack<int> s;              // create stack of integers
    s.push(10);                // 10
    s.push(20);                // 10 20
    s.push(30);                // 10 20 30
    cout << s.top() << endl;   // print top element of stack
    s.pop();                   // 10 20
    cout << s.size() << endl;  // print size of stack
    cout << s.empty() << endl; // check if stack is empty
}