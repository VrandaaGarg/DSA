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

// Using void function to insert at beginning of the linked list
//  void InsertAtBeg(Node **head, int data)
//  {
//      Node *newNode = new Node(data);
//      if (*head == NULL)
//      {
//          *head = newNode;
//          return;
//      }

//     newNode->next = *head;
//     *head = newNode;
// }

// or

// Using Node* function to insert at beginning of the linked list
Node *InsertAtBeg(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
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
    // InsertAtBeg(&head, 20);
    // InsertAtBeg(&head, 30);
    // InsertAtBeg(&head, 40);
    // InsertAtBeg(&head, 50);

    // or
    head = InsertAtBeg(head, 20);
    head = InsertAtBeg(head, 30);
    head = InsertAtBeg(head, 40);
    head = InsertAtBeg(head, 50);
    printLL(head);
    return 0;
}