#include <bits/stdc++.h>
using namespace std;

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

// We take two pointer first and second.
// Move 'second' n position ahead.
// Then move both 'first' and 'second' pointer one by one until 'second' reaches null.
// at this point 'first' will be at nth node from end. and 'second' will be at null.

void nthNodeFromEnd(Node *head, int n)
{
    Node *first = head;
    Node *second = head;
    for (int i = 1; i < n + 1; i++)
    {
        if (second == NULL)
        {
            cout << n << " is greater than the number of nodes in the list." << endl;
            return;
        }
        second = second->next;
    }

    while (second != NULL)
    {
        first = first->next;
        second = second->next;
    }

    cout << n << "th node from end:" << first->data << endl;
}

void printsll(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    printsll(head);
    nthNodeFromEnd(head, 2);
    nthNodeFromEnd(head, 1);
    nthNodeFromEnd(head, 5);
    nthNodeFromEnd(head, 6);
    return 0;
}