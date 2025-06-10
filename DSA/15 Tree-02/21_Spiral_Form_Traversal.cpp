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

//sol 1:
//we can have stack and queue to store the nodes of the tree.
//we reverse the order of the nodes in the stack and then add in the queue.

void printSpiral(Node* root) {
    if (!root) return;

    stack<Node*> s;
    queue<Node*> q;

    bool reverse = false;
    q.push(root);
    while (!q.empty()) { // While there are nodes at the current level
        int size = q.size();
        for(int i=0;i<size;i++) {
            Node* curr = q.front();
            q.pop();

            if (reverse) {
                s.push(curr);
            } else {
                cout << curr->key << " ";
            }

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        if (reverse) {
            while (!s.empty()) {
                cout << s.top()->key << " ";
                s.pop();
            }
        }
        reverse = !reverse; // Toggle the reverse flag for the next level
        cout << endl; // Print a new line after each level
    }
}

// Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(n), where n is the maximum number of nodes at any level in the binary tree (due to the queue and stack).

//Sol 2:

//we want to reduce the work by half so that a data does into the data structure only once and comes out only once.

//Use two stacks to store the nodes of the tree.

//First level goes in stack1 and second level goes in stack2.
//Algorithm:
//1. Push the root node into stack1.
//2. while any of the stacks is not empty:
//   a. If stack1 is not empty:
//      i. take out a node and print it.
//      ii. push children of the taken out node into stack2.
//   b. If stack2 is not empty:
//      i. take out a node and print it.
//      ii. push children of the taken out node into stack1 in reverse order (right child first).

//means we push left,right in stack1 and right,left in stack2.

void printSpiral2(Node* root) {
    if (!root) return;

    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty() || !s2.empty()) {
        // Process stack1
        while (!s1.empty()) {
            Node* curr = s1.top();
            s1.pop();
            cout << curr->key << " ";

            // Push right first so that left is processed next
            if (curr->right) s2.push(curr->right);
            if (curr->left) s2.push(curr->left);
        }

        // Process stack2
        while (!s2.empty()) {
            Node* curr = s2.top();
            s2.pop();
            cout << curr->key << " ";

            // Push left first so that right is processed next
            if (curr->left) s1.push(curr->left);
            if (curr->right) s1.push(curr->right);
        }
    }
}



