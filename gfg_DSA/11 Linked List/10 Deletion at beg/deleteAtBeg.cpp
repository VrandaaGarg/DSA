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

// Deletion at beginning of a linked list
Node *delNode(Node *head)
{
    if (head == NULL)
    {
        cout << "Underflow" << endl;
    }

    // head = head->next;
    // return head;

    // or

    // first we will store the address of the next node in a temporary variable
    Node *temp = head;
    // then we will link the temp to the next of head
    temp = temp->next;
    // then we will delete the head
    delete head;
    // then we will return new head
    return temp;
}

// Time complexity of delNode() is O(1) and space complexity is O(1).

// print the linked list
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
    Node *head = NULL;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = delNode(head);
    printLL(head);
    return 0;
}
