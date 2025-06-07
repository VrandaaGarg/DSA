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