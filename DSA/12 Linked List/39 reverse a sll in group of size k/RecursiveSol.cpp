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

Node *reverseSLL(Node *head, int k)
{
    Node *curr = head;
    Node *prev = NULL, *next = NULL;
    int count = 0;
    // Reverse k nodes
    while (curr != NULL && count < k)
    {
        next = curr->next; // Store the next node
        curr->next = prev; // Reverse the current node
        prev = curr;       // Move pointers one position ahead
        curr = next;       // Move pointers one position ahead
        count++;           // Increment the count
    }
    // Recur for the rest of the list
    if (next != NULL)
        head->next = reverseSLL(next, k);
    return prev; // prev is the new head of the list
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

void appendNode(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    appendNode(head, 20);
    appendNode(head, 30);
    appendNode(head, 40);
    appendNode(head, 50);
    appendNode(head, 60);
    appendNode(head, 70);

    cout << "Original List: ";
    printList(head);

    // Reverse in groups of 3
    head = reverseSLL(head, 3);
    cout << "Reversed in groups of 3: ";
    printList(head);

    return 0;
}
