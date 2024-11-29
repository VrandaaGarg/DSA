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
        printf("NULL\n");
        return;
    }

    if (head->next == NULL)
    {
        cout << head->data << endl;
        return;
    }
    Node *curr = head;
    while (curr->next != head)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << curr->data;
}

// or

// void printCLL(Node *head)
//{
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (Node *p = head->next; p != head; p = p->next)
//     {
//         cout << p->data << " ";
//     }
// }

int main()
{
    Node *head = NULL;
    printCLL(head);
    head = new Node(10);
    printCLL(head);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    printCLL(head);
    return 0;
}
