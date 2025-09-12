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

//Ceil is the no. greater than or equal to the given key and is the smallest among them.

//EXAMPLE
// Input: root = [8, 4, 12, 2, 6, 10, 14], key = 5
// Output: 6
// Explanation: The smallest number greater than or equal to 5 is 6.

//Remember
//if u find a node with the same value as key, return that node instantly

//Algo
//1. if the root's key is same as x, return root
//2. if the root's key is less than x, then search in the right subtree
//3. if the root's key is greater than x, update the result as root and change root to root's left subtree

Node* ceilInBST(Node* root, int key) {
    Node* result = nullptr;

    while (root) {
        if (root->data == key) {
            return root; // Found the exact match
        } else if (root->data < key) {
            root = root->right; // Move to the right subtree
        } else {
            result = root; // Update result and move to the left subtree
            root = root->left;
        }
    }

    return result; // Return the smallest node greater than or equal to key
}

