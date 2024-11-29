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
    };
};

void printCLL(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

int main()
{
    Node *head = NULL;
    printCLL(head);
    head = new Node(10);
    head->next = head;
    printCLL(head);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    printCLL(head);
    return 0;
}