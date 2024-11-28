#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    };
};

Node *deleteAtEnd(Node *head)
{
    // if DLL is empty
    if (head == NULL)
    {
        return NULL;
    }

    // if DLL has only one node
    if (head->next == NULL)
    {
        delete head; // deallocating memory of head
        return NULL;
    }
    Node *curr = head;

    // traversing to the second last node
    // while (curr->next->next != NULL)
    // {
    //     curr = curr->next;
    // }

    // Node *temp = curr->next;
    // curr->next = NULL;
    // delete (temp);

    // or

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    // curr is now pointing to the last node
    curr->prev->next = NULL; /// making next of second last node as NULL
    delete curr;             // deallocating memory of last node
    return head;
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Time complexity of deleteAtEnd() is O(n).
// If we are maintaining a tail pointer then time complexity will be O(1).
int main()
{
    Node *head = new Node(10);
    // printDLL(head);
    // head = deleteAtEnd(head);
    // printDLL(head);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printDLL(head);
    head = deleteAtEnd(head);
    printDLL(head);
    return 0;
}