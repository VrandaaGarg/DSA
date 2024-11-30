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

Node *insertAtBeg(Node *head, int x)
{
    Node *temp = new Node(x);

    // if the linked list is empty
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else // if the linked list is not empty
    {
        Node *curr = head;
        while (curr->next != head) // traverse the linked list to reach the last node
        {
            curr = curr->next;
        }
        curr->next = temp; // make the last node point to the new node
        temp->next = head; // make the new node point to the head
        return temp;       // return the new node as the new head
    }
}

// Time complexity: O(n)

// print the linked list
void printLL(Node *head)
{
    if (head == NULL)
        return;
    Node *r = head;
    do
    {
        cout << r->data << " ";
        r = r->next;
    } while (r != head);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    head = insertAtBeg(head, 5);
    head = insertAtBeg(head, 15);
    printLL(head);
    return 0;
}