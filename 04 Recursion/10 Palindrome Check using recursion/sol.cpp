#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    // If there is only one character or no character in the string
    if (start >= end)
    {
        return true;
    }

    // Checking if the first and last character are same
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}

// Time complexity: O(n)
// T(n) = T(n-2) + O(1)
// Auxiliary space: O(n) n/2 recursive calls on the stack

int main()
{
    string str;

    cout << "Enter string" << endl;
    cin >> str;
    int i = 0;

    // Calculating length of string
    while (str[i])
    {
        i++;
    }

    cout << isPalindrome(str, 0, i - 1);
}