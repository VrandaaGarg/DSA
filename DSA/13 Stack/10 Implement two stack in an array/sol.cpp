// we have to implement two stack in an array

// we will have pop1 pop2 push1 push2 functions
// now the approaches can be:
// 1. we divide the array in two equal size but this will not be efficient for exmaple: if we have 10 array size then 5-5 space is there for each stack and let say we have pushed 5 elements in array so stack1 is full and stack2 is empty so we can't push any element in stack1 now but still there is some extra space in array.
// 2. we can divide the array in two parts and let the stack1 grow in one direction and stack2 grow in other direction. This will be efficient as we can use the whole array space.

#include <bits/stdc++.h>
using namespace std;

struct TwoStack
{
    int *arr, top1, top2, cap;
    TwoStack(int n)
    {
        cap = n;
        top1 = -1;
        top2 = n;
        arr = new int[n];
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else if (top1 == top2 - 1)
        {
            cout << "OVERFLOW" << endl;
            return;
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else if (top1 == top2 - 1)
        {
            cout << "OVERFLOW" << endl;
            return;
        }
    }

    int pop1()
    {
        if (top1 == -1)
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }

        int res = arr[top1];
        top1--;
        return res;
    }

    int pop2()
    {
        if (top2 == cap)
        {
            cout << "UNDERFLOW" << endl;
            return -1;
        }

        int res = arr[top2];
        top2++;
        return res;
    }
};

int main()
{
    TwoStack s(6);
    s.pop1(); // UNDERFLOW
    s.pop2(); // UNDERFLOW

    s.push1(10); // 10
    s.push2(20); // 10 _ _ _ _ 20
    s.push2(30); // 10 _ _ _ 30 20
    s.push1(40); // 10 40 _ _ 30 20
    s.push2(50); // 10 40 _ 50 30 20
    s.push1(60); // 10 40 60 50 30 20

    for (int i = 0; i < 6; i++)
    {
        cout << s.arr[i] << " ";
    } // 10 40 60 50 30 20
    cout << endl;
    cout << s.pop1() << endl; // 60
    s.push1(70);              // 10 40 70 50 30 20
    for (int i = 0; i < 6; i++)
    {
        cout << s.arr[i] << " ";
    }
    cout << endl;
    s.push1(80); // OVERFLOW
    return 0;
}