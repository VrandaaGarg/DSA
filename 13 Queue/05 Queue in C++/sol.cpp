#include <bits/stdc++.h>
#include <queue>
using namespace std;

// Operations on Queue
// 1. push()
// 2. pop()
// 3. front()
// 4. back()    -- same as rear
// 5. size()
// 6. empty()

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;
    return 0;
}
