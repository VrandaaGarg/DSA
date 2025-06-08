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

// function to find the maximum value in the binary tree
int maxInBinaryTree(Node *root)
{
    if (root == NULL)   // If the current node is NULL, return INT_MIN
        return INT_MIN; // INT_MIN is used to represent the smallest possible integer value

    // Recursively find the maximum value in left and right subtrees and return the maximum of the current node's key and those values
    return max(root->key, max(maxInBinaryTree(root->left), maxInBinaryTree(root->right)));
}

int main()
{
    // Example usage
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(90);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout << "Maximum value in the binary tree: " << maxInBinaryTree(root) << endl;

    return 0;
}

// Time Complexity: O(n) where n is the number of nodes in the binary tree, as each node is visited once.
// Space Complexity: O(h) where h is the height of the binary tree, due to the recursive stack space.