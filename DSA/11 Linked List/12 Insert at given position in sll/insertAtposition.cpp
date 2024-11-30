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

Node *InsertAtPosition(Node *head, int data, int x)
{
    Node *newNode = new Node(data);

    // if the position is 1 then we will make the new node as the head
    if (x == 1)
    {
        newNode->next = head;
        return newNode;
    };

    int i = 1;
    Node *temp = head;

    // we will traverse the linked list till the position x-1
    while (i < x - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    // if the position is greater than the length of the linked list then we will return the head as it is
    if (temp == NULL)
    {
        return head;
    }

    // we will make the new node point to the next node of the temp node
    newNode->next = temp->next;
    // we will make the temp node point to the new node
    temp->next = newNode;
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
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = InsertAtPosition(head, 25, 5);
    printLL(head);
    return 0;
}