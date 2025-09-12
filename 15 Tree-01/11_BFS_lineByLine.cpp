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

// function to print level order line by line means after every line we give line space
void printLevelOrderLineByLine(Node *root)
{
    if (root == NULL)
    {
        return; // If the root is NULL, there are no nodes to print
    }

    queue<Node *> q;
    q.push(root); // Start with the root node in the queue
    q.push(NULL);
    while (q.size() > 1) // While there are nodes in the queue
    {
        Node *curr = q.front(); // Get the front node from the queue
        q.pop();
        if (curr == NULL) // If we encounter a NULL, it indicates the end of the current level
        {
            cout << endl; // Print a new line for the next level
            q.push(NULL); // Push NULL to mark the end of the next level
            continue;     // Skip to the next iteration means we dont execute the rest of the loop for this iteration
        }
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
}

// Algorithm:
//  1. If the root is NULL, return immediately.
//  2. Initialize a queue and push the root node into it.
//  3. Push a NULL marker into the queue to indicate the end of the first level.
//  4. While the queue has more than one element:
//     a. Pop the front node from the queue.
//     b. If the popped node is NULL, print a newline character to indicate the end of the current level.
//        Push another NULL marker into the queue to indicate the end of the next level.
//     c. If the popped node is not NULL, print its key.
//     d. If the popped node has a left child, push it into the queue.
//     e. If the popped node has a right child, push it into the queue.
//  5. The process continues until all nodes are printed level by level, with each level on a new line.

// Time Complexity: O(n) where n is the number of nodes in the binary tree, as each node is processed once.
// Space Complexity: theta(w) where w is the maximum width of the binary tree at any level, which can be less than n.
// This is because the queue can hold at most w nodes at any time, where w is the maximum number of nodes at any level of the tree.