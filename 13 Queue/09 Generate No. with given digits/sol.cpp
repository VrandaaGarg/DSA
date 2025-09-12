// Given a number n,print first n number(in increasing order) such that all these number have digits in set {5,6}

// Example:
// I/P: n=10
// O/P: 5,6,55,56,65,66,555,556,565,566
// I/P: n=4
// O/P: 5,6,55,56

// Note: n can be a big number and the result values might not fit in basic data types like int, long long etc.

#include <bits/stdc++.h>
#include <queue>
using namespace std;

// Time complexity: O(n)

void printFirstN(int n)
{
    queue<string> q; // string beacuse we might need to handle big numbers
    q.push("5");
    q.push("6");
    for (int i = 1; i <= n; i++)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    printFirstN(n);
    return 0;
}
