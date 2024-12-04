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

Node *reversek(Node *head, int k)
{
    Node *curr = head, *prevFirst = NULL;
    bool isFirstPass = true;
    while (curr != NULL)
    {
        Node *first = curr, *prev = NULL; // Store the first node of the current group
        int count = 0;                    // Count the number of nodes reversed
        while (curr != NULL && count < k)
        {
            Node *next = curr->next; // Store the next node
            curr->next = prev;       // Reverse the current node
            prev = curr;
            curr = next;
            count++;
        }
        if (isFirstPass)
        {
            head = prev;
            isFirstPass = false;
        }
        else
        {
            prevFirst->next = prev; // Connect the previous group to the current group
        }
        prevFirst = first; // Store the first node of the current group
    }
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
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    printList(head);
    head = reversek(head, 3);
    printList(head);
    return 0;
}