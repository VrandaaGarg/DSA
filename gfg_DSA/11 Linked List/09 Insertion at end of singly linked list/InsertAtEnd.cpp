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

// Node type function to insert at end
Node *InsertAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);

    // If the linked list is empty
    if (head == NULL)
    {
        return newNode;
        // first we will return newNode then we will put head = newNode in main function
    }

    Node *temp = head;         // creating a temporary node to traverse the linked list
    while (temp->next != NULL) // traversing till the last node
    {
        temp = temp->next;
    }
    temp->next = newNode; // connecting the last node to the newNode
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    };
    cout << "NULL";
}

int main()
{
    Node *head = NULL;
    head = InsertAtEnd(head, 20);
    head = InsertAtEnd(head, 30);
    head = InsertAtEnd(head, 40);
    head = InsertAtEnd(head, 50);
    printLL(head);
    return 0;
}