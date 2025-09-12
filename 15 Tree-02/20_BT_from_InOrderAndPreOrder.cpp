#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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

//Function dhould take InOrder and PreOrder traversals of a binary tree in array and construct the binary tree.
//We need InOrder and preOrder or PostOrder and InOrder to construct a binary tree.

//Example:
//in[]=[20,10,30]
//pre[]=[10,20,30]
//Output will be the root of the binary tree.


int preIndex = 0; //this stores the index of the current node in PreOrder traversal

Node* cTree(int in[], int pre[], int inStart, int inEnd) { //initializing the function with inStart as 0 and inEnd indices as array size - 1
    if (inStart > inEnd) return NULL; // Base case: no elements to construct the tree

    Node* root = new Node(pre[preIndex++]); // Create a new node with the current preIndex value
  
    // Find the index of this node in InOrder traversal
    int inIndex;
    for (inIndex = inStart; inIndex <= inEnd; inIndex++) {
        if (in[inIndex] == root->key) break;
    }

    // Recursively construct the left and right subtrees
    root->left = cTree(in, pre, inStart, inIndex - 1);
    root->right = cTree(in, pre, inIndex + 1, inEnd);

    return root; // Return the constructed tree
}
