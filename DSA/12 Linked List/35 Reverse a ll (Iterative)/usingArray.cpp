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

// Time complexity: O(n)
// require two traversals
// require extra space

Node *revList(Node *head)
{
    vector<int> arr;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        arr.push_back(curr->data); // push_back() is used to insert an element at the end of the vector
    }

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = arr.back();
        arr.pop_back(); // pop_back() is used to remove the last element from the vector
    }
    return head;
}

void printList(Node *head)
{
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printList(head);
    head = revList(head);
    printList(head);
    return 0;
}