#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key = k;
        left = NULL;
        right = NULL;
    }
};

// Recursive version of insert in BST
Node* insertInBST(Node* root, int x) {
    if (root == NULL) {
        return new Node(x);
    }
    if (x < root->key) {
        root->left = insertInBST(root->left, x); //= confirms the assignment of the left child
    } else if (x > root->key) {
        root->right = insertInBST(root->right, x); //= confirms the assignment of the right child if we dont use =, we will lose the reference to the left or right child
    }
    return root;
}

//Time Complexity: O(h) where h is the height of the tree.
//Space Complexity: O(h) for the recursion stack.

//Iterative version of insert in BST
Node* insertInBSTIterative(Node* root, int x) {
    Node* newNode = new Node(x);
    if (root == NULL) {
        return newNode; // If the tree is empty, return the new node as the root
    }   
    Node* curr = root;
    Node* parent = NULL;

    //This is same as searching for the node if the key already exists, we will return the root as it is.
    while (curr != NULL) {
        parent = curr;
        if (x < curr->key) {
            curr = curr->left;
        } else if (x > curr->key) {
            curr = curr->right;
        } else {
            return root; // If the key already exists, return the root as it is
        }
    }

    // Now, parent is the node under which we will insert the new node
    if (x < parent->key) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }
    return root;
}

//Time Complexity: O(h) where h is the height of the tree.
//Space Complexity: O(1) for the iterative version, O(h) for the recursive version due to the recursion stack.