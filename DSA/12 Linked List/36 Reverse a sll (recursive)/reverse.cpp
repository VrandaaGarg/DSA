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

Node *reverseSLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *restHead = reverseSLL(head->next); // this will return the head of the reversed linked list
    Node *restTail = head->next;
    restTail->next = head;
    head->next = NULL;
    return restHead;
}

void printList(Node *head)
{
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printList(head);
    head = reverseSLL(head);
    printList(head);
    return 0;
}