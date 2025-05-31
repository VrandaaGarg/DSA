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

// Function to perform preorder traversal of the binary tree
// Visits left subtree, then right subtree, and finally the root
void postorder(Node *root)
{
    if (root != NULL) // Check if the current node is not NULL if true then give control back to the caller
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}