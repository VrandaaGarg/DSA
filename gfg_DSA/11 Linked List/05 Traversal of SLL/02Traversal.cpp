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

// checking if not using a temporary variable to print the linked list will it change in original list or not
void printLL(Node *head)
{
    // Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    };
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    printLL(head);
    printLL(head);

    // 10-->NULL
    // 10-->NULL
    // in this we are changing in print list head and not in main head so no change in original list
    return 0;
}
