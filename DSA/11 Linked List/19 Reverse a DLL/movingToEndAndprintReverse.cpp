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
        next = NULL;
        prev = NULL;
    }
};

void *reverseDLL(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    while (head->next != NULL)
    {
        head = head->next;
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->prev;
    }
    cout << "NULL" << endl;
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
    reverseDLL(head);

    return 0;
}
