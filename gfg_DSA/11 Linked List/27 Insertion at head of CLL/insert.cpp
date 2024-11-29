#include <bits/stdc++.h>
using namespace std;

// In this code,we will add the newNode to the next of the head and then we will swap the data of the head and the newNode

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

Node *insertAthead(Node *head, int x)
{
    Node *temp = new Node(x);

    // if the linked list is empty
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next; // make the new node point to the head
        head->next = temp;       // make the head point to the new node
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}

// Time complexity: O(1)

// print the linked list
void printLL(Node *head)
{
    if (head == NULL)
        return;
    Node *r = head->next;
    do
    {
        cout << r->data << " ";
        r = r->next;
    } while (r != head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = head; // make the head point to itself
    head = insertAthead(head, 20);
    head = insertAthead(head, 30);
    head = insertAthead(head, 40);
    printLL(head);
    return 0;
}