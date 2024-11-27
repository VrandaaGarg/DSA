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

// Deletion at end of a linked list
Node *deleteTail(Node *head)
{
    if (head == NULL)
    {
        cout << "UNDERFLOW" << endl;
        return NULL;
    }
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    // first we will delete the last node
    delete (curr->next); // de-Allocate memory of the last node
    // then we will make the second last node as the last node
    curr->next = NULL;
    return head;
}

// print the linked list
void printLL(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    };
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = deleteTail(head);
    printLL(head);
    return 0;
}

// Time Complexity: O(n)
