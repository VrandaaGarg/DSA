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

int nthNodeFromEnd(Node *head, int n)
{
    int length = 0;

    Node *curr = head;
    while (curr != NULL)
    {
        length++;
        curr = curr->next;
    }

    if (length < n || n <= 0)
    {
        return -1;
    }

    Node *temp = head;
    for (int i = 1; i < length - n + 1; i++)
    {
        temp = temp->next;
    }

    return temp->data;
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    printList(head);
    cout << nthNodeFromEnd(head, 2) << endl;
    cout << nthNodeFromEnd(head, 3) << endl;
    cout << nthNodeFromEnd(head, 1) << endl;
    cout << nthNodeFromEnd(head, 5) << endl;
    return 0;
}