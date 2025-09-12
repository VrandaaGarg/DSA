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

// function to calculate the size of the binary tree
// size of binary tree is the number of nodes present in the binary tree
int sizeOfBinaryTree(Node *root)
{
    if (root == NULL) // If the current node is NULL, return 0
        return 0;

    // Recursively calculate the size of left and right subtrees and add 1 for the current node
    return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}

// Time Complexity: O(n) where n is the number of nodes in the binary tree, as each node is visited once.
// Space Complexity: O(h) where h is the height of the binary tree, due to the recursive stack space.

// This is the recursive approach to calculate the size of the binary tree.

// There is also an iterative approach to calculate the size of the binary tree using level order traversal or depth first search (DFS) using a queue or stack respectively.
// In the iterative approach, we can use a queue to perform level order traversal and count the number of nodes as we traverse the tree.
// In that time complexity will be O(n) and space complexity will be O(w) where w is the maximum width of the binary tree at any level, which can be less than n.