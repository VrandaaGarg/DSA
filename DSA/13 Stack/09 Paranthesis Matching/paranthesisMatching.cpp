#include <bits/stdc++.h>
using namespace std;

// Check if two brackets are matching
bool matching(char a, char b)
{
    return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'); // if a and b are matching brackets return true
}

// Check if the given string has balanced brackets
bool isBalanced(string str)
{
    stack<char> s;                         // create stack of characters
    for (int i = 0; i < str.length(); i++) // iterate through the string
    {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch); // if opening bracket push it to stack
        }
        else if (ch == ')' || ch == '}' || ch == ']') // if closing bracket
        {
            // total 3 conditions
            // 1. stack get empty before closing bracket return false
            // 2. top element of stack and current top element are not matching return false
            // 3. if top element and current element are matching pop the top element
            if (s.empty() || !matching(s.top(), ch)) // if stack is empty or top element of stack and current element are not matching
            {
                return false; // return false
            }
            s.pop(); // else pop the top element
        }
        // if any other character is present in the string ignore it
    }
    return s.empty(); // if stack is empty return true else false
}

int main()
{
    string str = "(a+b)+(c-d)";
    if (isBalanced(str))
    {
        cout << str << ": Balanced" << endl;
    }
    else
    {
        cout << str << ": Not Balanced" << endl;
    }

    str = "(a+b)+[c-d)";
    if (isBalanced(str))
    {
        cout << str << ": Balanced" << endl;
    }
    else
    {
        cout << str << ": Not Balanced" << endl;
    }
    return 0;
}
