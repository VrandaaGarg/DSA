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

// Function to calculate the height of a binary tree
int height(Node *root)
{
    if (root == NULL) // Check if the current node is NULL
        return 0;     // If true, return 0 as the height of an empty tree is 0
    else
        return max(height(root->left), height(root->right)) + 1; // Recursively calculate the height of left and right subtrees, and return the maximum height plus 1 for the current node
}

// Time Complexity: O(n) where n is the number of nodes in the binary tree
// Space Complexity: O(h) where h is the height of the binary tree, due to the recursive stack space