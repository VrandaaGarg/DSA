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

void printLevelOrderLineByLine(Node *root)
{
    if (root == NULL)
    {
        return; // If the root is NULL, there are no nodes to print
    }

    queue<Node *> q;
    q.push(root);      // Start with the root node in the queue
    while (!q.empty()) // While there are nodes in the queue
    {
        int size = q.size(); // Get the number of nodes at the current level
        for (int i = 0; i < size; i++)
        {
            Node *curr = q.front(); // Get the front node from the queue
            q.pop();
            cout << (curr->key) << " "; // Print the current node's key
            if (curr->left != NULL)
            {
                q.push(curr->left); // Add left child to the queue
            }
            if (curr->right != NULL)
            {
                q.push(curr->right); // Add right child to the queue
            }
        }
        cout << endl; // Print a new line after each level
    }
}

// Algorithm:
//  1. If the root is NULL, return immediately.
//  2. Initialize a queue and push the root node into it.
//  3. While the queue is not empty:
//     a. Get the number of nodes at the current level using q.size().
//     b. Iterate through the nodes at the current level:
//        i. Pop the front node from the queue.
//        ii. Print the current node's key.
//        iii. If the popped node has a left child, push it into the queue.
//        iv. If the popped node has a right child, push it into the queue.
//     c. After processing all nodes at the current level, print a newline character to separate levels.
// Time Complexity: O(n) where n is the number of nodes in the binary tree, as each node is processed once.
// Space Complexity: O(w) where w is the maximum width of the binary tree at any level, which can be less than n.