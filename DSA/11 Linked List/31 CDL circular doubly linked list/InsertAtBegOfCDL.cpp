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

Node *InsertAtBeg(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }

    Node *temp = head;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
    newNode->next = temp;
    temp->prev = newNode;
    return newNode;
}

void printCDL(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *curr = head;
    while (curr->next != head)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << curr->data << endl;
}

int main()
{
    Node *head = NULL;
    head = InsertAtBeg(head, 20);
    printCDL(head);
    head = InsertAtBeg(head, 30);
    head = InsertAtBeg(head, 50);
    head = InsertAtBeg(head, 60);
    printCDL(head);
    return 0;
}