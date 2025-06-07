#include <bits/stdc++.h>
using namespace std;

// struct Node function
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

// function to print node in breadth first search manner
void printLevelOrder(Node *root)
{
    if (root == NULL) // If the root is NULL, there are no nodes to print
    {
        return;
    }

    queue<Node *> q; // Create a queue to hold nodes for level order traversal
    q.push(root);    // Start with the root node in the queue

    while (q.empty() == false) // While there are nodes in the queue
    {
        Node *curr = q.front(); // Get the front node from the queue
        q.pop();
        cout << (curr->key) << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}