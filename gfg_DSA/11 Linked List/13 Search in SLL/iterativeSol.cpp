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

int searchll(Node *head, int x)
{
    int i = 1;
    // loop till the end of the linked list
    while (head != NULL)
    {
        if (head->data == x)
        {
            // return the index if the element is found
            return i;
        }
        else
        {
            i++;
            head = head->next;
        }
    }
    // return -1 if the element is not found
    return -1;
}

void printll(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printll(head);
    cout << searchll(head, 0) << endl;  // 0 is not present in the linked list
    cout << searchll(head, 20) << endl; // 20 is present at index 2
}