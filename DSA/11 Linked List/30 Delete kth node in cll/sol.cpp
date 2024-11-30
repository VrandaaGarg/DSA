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

// Assumption No.of node>=k
// case1: when NULL linked is there
// case2: when only one node is there
// case3: when k=1 then we copy the data of next node to head and delete the next node
// case4: when k>1 then we traverse the list to k-1 and delete the kth node

/////////////////////using do while loop///////////////////////////
Node *deletkthNode(Node *head, int k)
{
    // if list is empty
    if (head == NULL)
        return NULL;
    // if linked list contains only one node then we assign head as NULL
    if (head->next == head && k == 1)
    {
        delete head;
        return NULL;
    }
    // if k==1 then we copy the data of next node to head and delete the next node
    if (k == 1)
    {
        head->data = head->next->data;
        Node *deleteNode = head->next;
        head->next = deleteNode->next;
        delete (deleteNode);
        return head;
    }

    int i = 1; // to keep track of kth node
    Node *curr = head;
    do
    {
        if (i == k - 1) // if we reach k-1th node then we delete the kth node
        {
            Node *deleteNode = curr->next;
            curr->next = deleteNode->next;
            delete (deleteNode);
            return head;
        }

        // otherwise we move to the next node
        curr = curr->next;
        i++;
    } while (curr->next != head);
}

//////////////using for loop//////////////////////////////

// Node *deletkthNode(Node *head, int k)
// {
//     if (head == NULL) // If the list is empty
//         return NULL;

//     if (head->next == head && k == 1) // If there is only one node
//     {
//         delete head;
//         return NULL;
//     }

//     if (k == 1) // If the first node is to be deleted
//     {
//         head->data = head->next->data; // Copy the data from the next node
//         Node *deleteNode = head->next;
//         head->next = deleteNode->next; // Skip the next node
//         delete deleteNode;
//         return head;
//     }

//     Node *curr = head;
//     for (int i = 1; i < k - 1 && curr->next != head; i++) // Traverse to (k-1)th node
//     {
//         curr = curr->next;
//     }

//     if (curr->next == head) // If k is greater than the number of nodes
//         return head;

//     Node *deleteNode = curr->next; // Delete the kth node
//     curr->next = deleteNode->next;
//     delete deleteNode;

//     return head;
// }

void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL\n";
        return;
    }
    Node *r = head;
    do
    {
        cout << r->data << " ";
        r = r->next;
    } while (r != head);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head;

    cout << "original list: ";
    printList(head);
    cout << endl;

    head = deletkthNode(head, 1);
    cout << "After deleting 1st node: ";
    printList(head);
    cout << endl;

    head = deletkthNode(head, 2);
    cout << "After deleting 2nd node: ";
    printList(head);
    cout << endl;

    head = deletkthNode(head, 3);
    cout << "After deleting 3rd node: ";
    printList(head);
    return 0;
}
