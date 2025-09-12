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

// left view is the nodes that are visible when the tree is viewed from the left side

int maxLevel = 0; // Global variable to keep track of the maximum level visited

void printLeft(Node *root, int level)
{
    if (root == NULL) // If the current node is NULL, return
        return;

    // If this is the first node of its level, print it
    if (maxLevel < level)
    {
        cout << root->key << " ";
        maxLevel = level; // Update the maximum level visited
    }

    // Recur for left and right subtrees, increasing the level by 1
    printLeft(root->left, level + 1);
    printLeft(root->right, level + 1);
}

void printLeftView(Node *root)
{
    maxLevel = 0;       // Reset the maximum level before starting
    printLeft(root, 1); // Start from level 1
}

int main()
{
    // Example usage
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);

    cout << "Left view of the binary tree: ";
    printLeftView(root);
    cout << endl;

    return 0;
}

// Algorithm:
//  1. Initialize a global variable `maxLevel` to keep track of the maximum level visited.
//  2. Define a recursive function `printLeft` that takes the current node and its level as parameters.
//  3. If the current node is NULL, return.
//  4. If the current level is greater than `maxLevel`, print the node's key and update `maxLevel`.
//  5. Recursively call `printLeft` for the left child first, then for the right child, incrementing the level by 1 each time.
//  6. Define a function `printLeftView` that initializes `maxLevel` and calls `printLeft` starting from level 1.
//  Time Complexity: O(n) where n is the number of nodes in the binary tree, as each node is visited once.
//  Space Complexity: O(h) where h is the height of the binary tree, due to the recursive stack space.
//  Note: The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.
//  The left view includes the first node at each level when traversing the tree from left to right.

void printLeftViewIterative(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *node = q.front();
            q.pop();

            // Print the first node of this level
            if (i == 0)
            {
                cout << node->key << " ";
            }

            // Enqueue left child first, then right child
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
    }
}

/// printLeftViewIterative function