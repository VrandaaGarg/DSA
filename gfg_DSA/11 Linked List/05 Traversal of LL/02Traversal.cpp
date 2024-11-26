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

//
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
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    printLL(head);
    printLL(head);

    // 10-->NULL
    // 10-->NULL
    // in this we are changing print list head and main head so no change in original list
    return 0;
}
