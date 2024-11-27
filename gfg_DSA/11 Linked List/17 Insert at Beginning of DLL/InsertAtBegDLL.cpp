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
    };
};

Node *InsertAtBegDLL(Node *head, int x)
{
    Node *newNode = new Node(x); // creating a new node with data x
    if (head == NULL)
    {
        return newNode;
    }
    head->prev = newNode; // making previous of head as newNode
    newNode->next = head; // making next of newNode as head
    return newNode;
}

// or
//  Node* InsertAtBegDLL(Node* head,int x)
//  {
//      Node* newNode=new Node(x);
//      newNode->next=head;
//      if(head!=NULL)
//      {
//          head->prev=newNode;
//      }
//      return newNode;
//  }

void printdll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

int main()
{
    Node *head = NULL;
    printdll(head);                  // null
    head = InsertAtBegDLL(head, 40); // inserting when dll was empty
    printdll(head);                  // 40->null
    head->next = new Node(20);       // 40->20->null
    head->next->next = new Node(30); // 40->20->30->null
    head = InsertAtBegDLL(head, 5);  // inserting at beginning
    printdll(head);                  // 5->40->20->30->null
    head = InsertAtBegDLL(head, 2);
    printdll(head); // 2->5->40->20->30->null
}