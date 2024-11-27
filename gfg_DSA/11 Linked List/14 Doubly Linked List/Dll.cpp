#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    };
};

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL";
}

// prev of first node is NULL and next of last node is NULL

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    printDLL(head);

    // or
    // Node* head=new Node(10);
    // Node* temp1=new Node(20);
    // Node* temp2=new Node(30);
    // head->next=temp1;
    // temp1->prev=head;
    // temp1->next=temp2;
    // temp2->prev=temp1;
    // printDLL(head);
}