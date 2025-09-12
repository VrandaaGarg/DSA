#include <bits/stdc++.h>
using namespace std;

// structure of stack using array
// Issue with array implementation of stack is that we need to know the size of stack in advance
// but what if we want our stack to grow dynamically
// we can use vector class for that

struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int c) // constructor
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    // push element in stack
    void push(int x)
    {
        if (top == cap - 1) // if stack is full
        {
            printf("OVERFLOW\n");
            return;
        }

        // increment top and add element
        top++;
        arr[top] = x;
    }

    int pop()
    {
        if (top == -1) // if stack is empty
        {
            cout << "UNDERFLOW\n";
            return -1;
        }
        // return top element and decrement top
        int res = arr[top];
        top--;
        return res;
    }

    int peep()
    {

        if (top == -1) // if stack is empty
        {
            cout << "Stack is empty";
            return -1;
        }
        return arr[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return (top == -1) ? true : false;
    }
};

int main()
{
    MyStack s(5);
    s.push(10);                               // 10
    s.push(20);                               // 10 20
    s.push(30);                               // 10 20 30
    cout << "peep:" << s.peep() << endl;      // 30
    s.pop();                                  // 10 20
    cout << "peep:" << s.peep() << endl;      // 20
    cout << "size:" << s.size() << endl;      // 2
    cout << "Empty? " << s.isEmpty() << endl; // false
    s.push(40);                               // 10 20 40
    s.push(50);                               // 10 20 40 50
    s.push(60);                               // 10 20 40 50 60
    s.push(70);                               // 70 not added as stack is full
    cout << "peep:" << s.peep() << endl;      // 60

    return -1;
}

// we are pushing and poping at end because it is O(1) operation
// if we push and pop at beginning then it will be O(n) operation in array implementation

// if we use vector class then we can push and pop at end and beginning both in O(1) time
