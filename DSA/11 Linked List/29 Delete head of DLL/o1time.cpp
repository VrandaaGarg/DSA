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

// Time complexity=O(1)
// we are copying the head->next data to head and deleting the head->next node

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }

    // copy the data of next node to head and delete the next node
    Node *temp = head->next;
    head->data = temp->data;
    head->next = temp->next;
    delete temp;
    return head;
}

void printDll(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    printDll(head);
    cout << endl;
    head = deleteHead(head);
    printDll(head);
    return 0;
}
