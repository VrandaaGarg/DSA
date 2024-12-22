#include <bits/stdc++.h>
using namespace std;

// Time complexity of deleteHeadDLL() is O(1)

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *deleteHeadDLL(Node *head)
{
    if (head == NULL)
    {
        cout << "DLL is empty" << endl;
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp = head; // storing head in temp because we have to deallocate memory of head
        head = head->next; // moving head to next node
        head->prev = NULL; // making prev of new head as NULL
        delete temp;       // deallocating memory of previous head
        return head;
    }
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printDLL(head);
    head = deleteHeadDLL(head);
    printDLL(head);
    head = deleteHeadDLL(head);
    printDLL(head);
    head = deleteHeadDLL(head);
    printDLL(head);
    head = deleteHeadDLL(head);
    printDLL(head);
    return 0;
}