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

Node *revList(Node *head)
{
    Node *prev = NULL; // prev is used to store the address of the previous node
    Node *curr = head; // curr is used to store the address of the current node

    // reversing the links
    while (curr != NULL)
    {
        Node *next = curr->next; // next is used to store the address of the next node
        curr->next = prev;       // unlinking curr from the next node and linking it to the previous node
        prev = curr;             // moving prev to curr
        curr = next;             // moving curr to next
    }
    return prev; // as curr is NULL, prev will be the new head
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
    head = revList(head);
    printList(head);
    return 0;
}