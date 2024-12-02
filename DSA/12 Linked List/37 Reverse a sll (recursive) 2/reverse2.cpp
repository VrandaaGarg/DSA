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

// This function will reverse the linked list recursively
Node *reverseRec(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *next = curr->next;       // next is used to store the address of the next node
    curr->next = prev;             // unlinking curr from the next node and linking it to the previous node
    return reverseRec(next, curr); // moving prev to curr and curr to next
}

// This function will call the reverseRec function
Node *reverseSLL(Node *head)
{
    return reverseRec(head, NULL); // as prev is NULL, head will be the new tail
}

void printList(Node *head)
{
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printList(head);
    head = reverseSLL(head);
    printList(head);
    return 0;
}