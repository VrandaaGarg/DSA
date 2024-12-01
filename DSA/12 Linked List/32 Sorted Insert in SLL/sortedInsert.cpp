#include <bits/stdc++.h>
using namespace std;

// we have to insert an element in an linked list such that after insertion linked list remain sorted

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
// Time Complexity: depends on the position where we have to insert the element
//  if we have to insert at the end then O(n)
//  if we have to insert at the beginning then O(1)
// So worst case time complexity is O(n)

Node *SortedInsert(Node *head, int data)
{
    Node *newNode = new Node(data);

    // if linked list is empty
    if (head == NULL)
    {
        return newNode; // return new node as head
    }

    // if new node is smaller than head then insert newNode before head and return newNode as head
    if (head->data > data)
    {
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;

    // checking two conditions :
    // 1. if next node is not null
    // 2. if next node data is smaller than data
    while ((curr->next != NULL) && curr->next->data < data)
    {
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head; // return head
}

// print sll
void printSLL(Node *head)
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
    Node *head = NULL;
    head = SortedInsert(head, 10); // Insertion in empty linked list
    printSLL(head);

    head = SortedInsert(head, 5); // Insertion when new node is smaller than head
    printSLL(head);

    head = SortedInsert(head, 20); // Insertion when newNode is the largest
    printSLL(head);

    head = SortedInsert(head, 15); // Insertion in between
    printSLL(head);

    head = SortedInsert(head, 7);
    head = SortedInsert(head, 25);
    head = SortedInsert(head, 2);
    head = SortedInsert(head, 22);
    head = SortedInsert(head, 7); // checking if duplicate elements are allowed
    printSLL(head);

    return 0;
}