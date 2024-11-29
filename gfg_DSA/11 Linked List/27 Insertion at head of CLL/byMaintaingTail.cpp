#include <bits/stdc++.h>
using namespace std;

// This is the code for insertion at the head of a circular linked list by maintaining the tail pointer

// structure of a node
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

Node *insertAthead(Node *tail, int x)
{
    Node *temp = new Node(x);

    // if the linked list is empty
    if (tail == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = tail->next; // make the new node point to the head
        tail->next = temp;       // make the tail point to the new node
        return tail;
    }
}

// Time complexity: O(1)

// print the linked list
void printLL(Node *tail)
{
    if (tail == NULL)
        return;
    Node *r = tail->next;
    do
    {
        cout << r->data << " ";
        r = r->next;
    } while (r != tail->next);
}

int main()
{
    Node *tail = new Node(10);
    tail->next = tail; // make the tail point to itself
    tail = insertAthead(tail, 20);
    tail = insertAthead(tail, 30);
    tail = insertAthead(tail, 40);
    printLL(tail);
    return 0;
}
