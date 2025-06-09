#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key = k;
        left = NULL;
        right = NULL;
    }
};

//Balanced tree is a tree where the height of the left and right subtrees of any node differ by at most one

//Naive solution with time complexity O(n^2) and space complexity O(h) where h is the height of the tree

// Function to calculate the height of a binary tree
int height(Node* root) {
    if (root == NULL) // If the node is NULL, height is 0
        return 0;
    return 1 + max(height(root->left), height(root->right)); // Height is 1 plus the maximum height of the left and right subtrees
}
bool isBalanced(Node* root){
    if (root == NULL) // If the node is NULL, it is balanced
        return true;

        int lh=height(root->left); // Height of left subtree
        int rh=height(root->right); // Height of right subtree
    return (abs(lh - rh) <= 1) && isBalanced(root->left) && isBalanced(root->right); // Check if the current node is balanced and recursively check the left and right subtrees
}

//Best solution with time complexity O(n) and space complexity O(h) where h is the height of the tree

// Function to check if a binary tree is balanced
int isBalancedOptimized(Node* root) {
    if (root == NULL) { // If the node is NULL, it is balanced and height is 0
        return 0;
    }

    int lh=isBalancedOptimized(root->left); // Check if left subtree is balanced and get its height
    if (lh == -1) return -1; // If left subtree is not balanced, return false
    int rh=isBalancedOptimized(root->right); // Check if right subtree is balanced and get its height
    if (rh == -1) return -1; // If right subtree is not balanced, return false
    if (abs(lh - rh) > 1) { // Check if the current node is balanced
        return -1; // If the height difference is greater than 1, return false
    }else{
        return max(lh, rh) + 1; // If balanced, return the height of the current node
    }
}
