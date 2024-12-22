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

Node *removeDuplicate(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *prev = head;
    Node *curr = temp->next;
    while (curr != NULL)
    {
        if (prev->data != curr->data)
        {
            temp->next = curr;
            temp = temp->next;
        }

        prev = curr;
        curr = curr->next;
    }
    temp->next = NULL;

    return head;
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(40);
    head->next->next->next->next->next->next = new Node(50);
    head->next->next->next->next->next->next->next = new Node(50);
    printList(head);
    head = removeDuplicate(head);
    printList(head);
    return 0;
}
