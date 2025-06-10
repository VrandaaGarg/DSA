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

//We use Inorder Traversal to convert a Binary Tree to a Doubly Linked List (DLL).
// The left pointer of each node will point to the previous node in the DLL

Node* prevNode = NULL; 

Node* BTtoDLL(Node* root) {
    if (root == NULL) return root;

    // Recursively convert left subtree
    Node* head = BTtoDLL(root->left);

    // Process current node
    if (prevNode == NULL) {
         head = root; // The leftmost node is head of DLL
    } else {
        root->left = prevNode;
        prevNode->right = root;
    }
    prevNode = root; // Update prev to current

    // Recursively convert right subtree
    BTtoDLL(root->right);

    return head; // Return the head of the doubly linked list
}

