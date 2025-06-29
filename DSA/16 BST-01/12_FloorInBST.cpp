#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

//Floor is the closest smaller or equal to value to the given key in BST

//Case 1: If the given key is not present in the BST, return the largest value smaller than the key.
//Case 2: If the given key is present in the BST, return node with the key.
//If there is no smaller value than the key, return NULL

Node* floorInBST(Node* root, int key) {
    Node* floorNode = nullptr;

    while (root) {
        if (root->data == key) {
            return root; // Key found, return the node itself
        } else if (root->data < key) {
            floorNode = root; // Update floorNode to current node
            root = root->right; // Move to the right subtree
        } else {
            root = root->left; // Move to the left subtree
        }
    }

    return floorNode; // Return the closest smaller or equal value
}

//Time Complexity: O(h), where h is the height of the BST
//Space Complexity: O(1), since we are using only a constant amount of space

