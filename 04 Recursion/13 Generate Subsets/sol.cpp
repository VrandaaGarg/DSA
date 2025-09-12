#include <bits/stdc++.h>
using namespace std;

// This problem can also be called generatting subsequences of a string

// Example:
//  Input: "abc"
//  Output: ["", "a", "b", "c", "ab", "ac", "bc", "abc"]

void sol(string s, string curr = "", int i = 0)
{
    if (i == s.length())
    {
        cout << curr << " "; // Print the current subsequence
        return;
    }

    sol(s, curr, i + 1);        // Excluding the current character
    sol(s, curr + s[i], i + 1); // Including the current character
}

int main()
{
    string s = "abc";
    sol(s);
    return 0;
}