#include <bits/stdc++.h>
using namespace std;

// Time complexity of all operations is O(1)
// doing push and pop operation at head of linked list

// structure of stack using linked list
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// structure of stack using linked list
struct MyStack
{
    Node *head;
    int size;
    MyStack()
    {
        head = NULL;
        size = 0;
    }

    // push element in stack
    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = head; // handles both empty and non-empty stack
        head = newNode;
        size++;
    }

    // pop element from stack
    int pop()
    {
        if (head == NULL) // if the stack is empty
        {
            printf("UNDERFLOW");
            return 0;
        }
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }

    // get size of stack
    int getSize()
    {
        return size;
    }

    // check if stack is empty
    bool isEmpty()
    {
        return size == 0 ? true : false;
    }

    // get top element of stack
    int peek()
    {
        if (head == NULL)
        {
            cout << "UNDERFLOW" << endl;
            return 0;
        }
        return head->data;
    }
};

int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}