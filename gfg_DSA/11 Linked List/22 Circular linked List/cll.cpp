#include <bits/stdc++.h>
using namespace std;

// Last node connecting back to the first node
// so next of last node is not null it is pointing back to the first node
// A circular linked list can be a singly or doubly both but we will talk about singly linked list

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

// NULL circular linked list is head=NULL
// In single node circular linked list head->next=head

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head; // 10->20->30->head
    return 0;
}
