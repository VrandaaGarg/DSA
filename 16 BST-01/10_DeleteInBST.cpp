#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

   Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

//this sucessor does not give u general successor, it gives the inorder successor only when there is right child because general succesor function can also give u ancestor when there is no right child
//this is a helper function to find the inorder successor of a node in BST
Node *getSuccessor(Node *curr) {
    curr = curr->right;
    while (curr && curr->left) {
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data) {
        root->left = deleteInBST(root->left, key);
    } else if (key > root->data) {
        root->right = deleteInBST(root->right, key);
    } else {
        // Node to be deleted found
        if (!root->left && !root->right) {
            // Case 1: No child
            delete root;
            return nullptr;
        } else if (!root->left || !root->right) {
            // Case 2: One child
            Node* temp = root->left ? root->left : root->right;
            delete root;
            return temp;
        } else {
            // Case 3: Two children
            Node* successor = getSuccessor(root);
            root->data = successor->data; // Replace with successor's value
            root->right = deleteInBST(root->right, successor->data); // Delete the successor
        }
    }
    return root;
}

//Time Complexity: O(h) where h is the height of the BST
//Space Complexity: O(h) for recursive approach due to call stack