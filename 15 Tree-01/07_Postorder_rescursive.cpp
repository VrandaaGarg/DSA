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

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout << "Postorder traversal of the binary tree is: ";
    postorder(root); // Output: 20 40 50 30 10
    cout << endl;

    return 0;
}