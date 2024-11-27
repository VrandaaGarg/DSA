#include <bits/stdc++.h>
using namespace std;

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

// Insertion at end of a linked list
void InsertAtEnd(Node *&head, int data) //*& is used to change the value of head
{
    Node *newNode = new Node(data);

    // If the linked list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Printing the linked list
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

    InsertAtEnd(head, 20);
    InsertAtEnd(head, 30);
    InsertAtEnd(head, 40);
    InsertAtEnd(head, 50);
    printLL(head);
    return 0;
}