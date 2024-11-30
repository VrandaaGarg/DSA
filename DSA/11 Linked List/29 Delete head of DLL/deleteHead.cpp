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

// Time complexity=O(n)
// we are traversing the list to the last node and deleting the head node

Node *deleteHead(Node *head)
{
    // if list is empty
    if (head == NULL)
    {
        printf("underflow\n");
        return NULL;
    }
    // if linked list contains only one node then we assign head as NULL
    if (head->next == head)
    {
        delete (head);
        return NULL;
    }

    // else we traverse the list and delete the head node
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next; // traversing the list to the last node
    }
    // making last note point to the next node of head
    curr->next = head->next;
    delete (head);
    return (curr->next);
}

// print the circular linked list
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL\n";
        return;
    }
    Node *r = head;
    do
    {
        cout << r->data << " ";
        r = r->next;
    } while (r != head);
}

int main()
{
    Node *head = NULL;
    head = deleteHead(head);
    printList(head);
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    printList(head);
    cout << endl;
    head = deleteHead(head);
    printList(head);
    return 0;
}
