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

// recursive function to display the linked list
void display(Node *head)
{
    // base condition
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }

    // printing the data of the current node
    cout << head->data << "-->";
    // calling the function recursively for the next node
    display(head->next);
}

// Time complexity: O(n)
// Auxiliary Space: O(n)

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    display(head);
    return 0;
}