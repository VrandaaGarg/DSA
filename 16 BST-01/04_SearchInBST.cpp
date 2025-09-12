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

bool searchInBST(Node *root, int key) {
    if (root == NULL) {
        return false; // Base case: if the tree is empty, the key is not found
    } else if (root->key == key) {
        return true; // If the root's key matches the target key, key is found
    } else if (key < root->key) {
        return searchInBST(root->left, key); // if key is less than the root's key, Search in the left subtree
    } else {
        return searchInBST(root->right, key); // if key is greater than the root's key, Search in the right subtree
    }
}

//Iterative version of search in BST
bool searchInBSTIterative(Node *root, int key) {
    while (root != NULL) {
        if (root->key == key) {
            return true; // If the root's key matches the target key, key is found
        } else if (key < root->key) {
            root = root->left; // if key is less than the root's key, move to the left subtree
        } else {
            root = root->right; // if key is greater than the root's key, move to the right subtree
        }
    }
    return false; // If we reach here, the key was not found in the BST
}

//Time Complexity: O(h) where h is the height of the tree.
//Space Complexity: O(1) for the iterative version, O(h) for the recursive version due to the recursion stack.
//if the tree is balanced, h = log(n), where n is the number of nodes in the tree. and if the tree is skewed, h = n.