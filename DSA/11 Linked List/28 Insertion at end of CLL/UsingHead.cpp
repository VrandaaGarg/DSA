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

// Time complexity: O(n)

// insert at end of CLL
Node *insertAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    Node *curr = head;

    while (curr->next != head)
    {
        curr = curr->next;
    }

    curr->next = newNode;
    newNode->next = head;

    return head;
}

// print cll

void printCLL(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr->next != head);

    cout << endl;
}

int main()
{

    Node *head = NULL;

    head = insertAtEnd(head, 10);
    printCLL(head);

    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    printCLL(head);

    return 0;
}