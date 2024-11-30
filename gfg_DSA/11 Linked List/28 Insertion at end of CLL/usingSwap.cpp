#include <bits/stdc++.h>
using namespace std;

// structure of a node
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

// Time complexity: O(1)
// we are first inserting new node after head then swapping the data of head nd this newNode and then making this redefininng head as head->next

// insert at end of CLL
Node *InsertAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);

    // if head is NULL then make newNode as head and return
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    // if head is not NULL then insert newNode after head
    newNode->next = head->next;

    // make newNode as head
    head->next = newNode;

    // swapping the data of head and newNode
    swap(head->data, newNode->data);

    // or
    // int temp = head->data;
    // head->data = newNode->data;
    // newNode->data = temp;

    // returning newNode which has data of previous head
    return newNode;
}

// print the CLL
void printLL(Node *head)
{
    if (head == NULL)
        return;

    Node *r = head;
    do
    {
        cout << r->data << " ";
        r = r->next;
    } while (r != head);
}

int main()
{
    Node *head = NULL;

    head = InsertAtEnd(head, 10);
    printLL(head);
    cout << endl;

    head = InsertAtEnd(head, 20);
    head = InsertAtEnd(head, 30);
    head = InsertAtEnd(head, 40);
    printLL(head);

    return 0;
}
