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
    }
    
    if (root->key == key) {
        return true; // Key found
    } else if (key < root->key) {
        return searchInBST(root->left, key); // if key is less than the root's key, Search in the left subtree
    } else {
        return searchInBST(root->right, key); // if key is greater than the root's key, Search in the right subtree
    }
}