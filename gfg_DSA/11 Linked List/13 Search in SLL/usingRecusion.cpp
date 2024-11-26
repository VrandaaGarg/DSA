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
    if (head == NULL)
    {
        return -1;
    }

    // if the element is found at the head
    if (head->data == x)
    {
        return 1;
    }
    else
    { // search in the rest of the linked list
        int res = searchll(head->next, x);
        if (res == -1)
        {
            return -1; // return -1 if the element is not found
        }
        else
        {
            return res + 1;
        }
    }
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

// Time complexity of searchll() is O(n) where n is the number of nodes in the linked list.
// for both the recursive and iterative solutions.
// Space complexity of searchll() is O(n) for the recursive solution and O(1) for the iterative solution.
// In sorted linked list,use binary search to reduce time complexity to O(logn) in general but not possible in ll.

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printll(head);
    cout << searchll(head, 0) << endl;  // 0 is not present in the linked list
    cout << searchll(head, 20) << endl; // 20 is present at index 2
}