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

// In odd no. of node print middle one
// In even no. of node print second middle one
// In singly linked list,print head
// In two node sll,print second node

int middleNode(Node *head)
{
    if (head == NULL)
    {
        cout << "empty sll";
        return -1;
    }

    Node *curr = head;
    Node *endNode = head;
    while (endNode->next != NULL && endNode->next->next != NULL)
    {
        curr = curr->next;
        endNode = endNode->next->next;
    }
    if (endNode->next == NULL)
    {
        return curr->data;
    }
    if (endNode->next->next == NULL)
    {
        return curr->next->data;
    }
}

void printsll(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL";
}

int main()
{
    Node *head1 = new Node(10);
    printsll(head1);
    cout << endl;
    cout << "Middle of sll is: " << middleNode(head1) << endl;

    Node *head2 = new Node(20);
    head2->next = new Node(30);
    printsll(head2);
    cout << endl;
    cout << "Middle of sll is: " << middleNode(head2) << endl;

    Node *head3 = new Node(40);
    head3->next = new Node(50);
    head3->next->next = new Node(60);
    head3->next->next->next = new Node(70);
    head3->next->next->next->next = new Node(80);
    printsll(head3);
    cout << endl;
    cout << "Middle of sll is: " << middleNode(head3) << endl;

    Node *head4 = new Node(90);
    head4->next = new Node(100);
    head4->next->next = new Node(110);
    head4->next->next->next = new Node(120);
    head4->next->next->next->next = new Node(130);
    head4->next->next->next->next->next = new Node(140);
    printsll(head4);
    cout << endl;
    cout << "Middle of sll is: " << middleNode(head4) << endl;
    return 0;
}