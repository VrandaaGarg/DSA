#include <bits/stdc++.h>
using namespace std;

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

// Time complexity: O(1)

// insert at end of CLL
Node *InsertAtEnd(Node *tail, int data)
{
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    newNode->next = tail->next;
    tail->next = newNode;
    return newNode;
}

// print the CLL
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
    Node *tail = NULL;

    tail = InsertAtEnd(tail, 10);
    printLL(tail);
    cout << endl;

    tail = InsertAtEnd(tail, 20);
    tail = InsertAtEnd(tail, 30);
    tail = InsertAtEnd(tail, 40);
    printLL(tail);

    return 0;
}