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
        prev = NULL;
        next = NULL;
    }
};

Node *InsertAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }

    Node *tail = head->prev;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail->next = newNode;
    return head;
}

void printCDL(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head); // Loop until back at the head
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = InsertAtEnd(head, 10);
    printCDL(head);
    head = InsertAtEnd(head, 20);
    head = InsertAtEnd(head, 30);
    head = InsertAtEnd(head, 40);
    printCDL(head);
    return 0;
}