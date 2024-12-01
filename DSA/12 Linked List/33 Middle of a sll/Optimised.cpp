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

// based on slow and fast pointer reference
// slow move one node at a time
// fast move two node at a time
// so when fast reaches end ,slow will be at middle
int middleNode(Node *head)
{
    if (head == NULL)
    {
        cout << "empty sll";
        return -1;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
    cout << middleNode(head1) << endl;
    Node *head2 = new Node(20);
    head2->next = new Node(30);
    printsll(head2);
    cout << endl;
    cout << middleNode(head2) << endl;
    Node *head3 = new Node(40);
    head3->next = new Node(50);
    head3->next->next = new Node(60);
    printsll(head3);
    cout << endl;
    cout << middleNode(head3) << endl;
    Node *head4 = new Node(70);
    head4->next = new Node(80);
    head4->next->next = new Node(90);
    head4->next->next->next = new Node(100);
    head4->next->next->next->next = new Node(110);
    head4->next->next->next->next->next = new Node(120);
    printsll(head4);
    cout << endl;
    cout << middleNode(head4) << endl;
    return 0;
}