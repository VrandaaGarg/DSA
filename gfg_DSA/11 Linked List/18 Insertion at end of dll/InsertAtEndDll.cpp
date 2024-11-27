#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// function to insert at end of DLL
Node *InsertAtEndDLL(Node *head, int data)
{
    // creating a new node with data x
    Node *newNode = new Node(data);

    // Corner case when DLL is empty
    if (head == NULL)
    {
        return newNode;
    }

    Node *curr = head;

    // traversing to the last node
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode; // making next of last node as newNode
    newNode->prev = curr; // making previous of newNode as last node

    return head;
}

// function to print DLL
void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    printDLL(head);
    head = InsertAtEndDLL(head, 10);
    printDLL(head);
    head = InsertAtEndDLL(head, 20);
    head = InsertAtEndDLL(head, 30);
    head = InsertAtEndDLL(head, 40);
    printDLL(head);
}