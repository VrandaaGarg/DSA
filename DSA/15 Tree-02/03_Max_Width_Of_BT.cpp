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

//Maximum width of a binary tree is the maximum number of nodes present at any level in the tree.

int MaxWidth(Node* root){
    if(root == NULL) return 0; // If the tree is empty, width is 0

    queue<Node*> q; // Queue to perform level order traversal
    q.push(root); // Start with the root node
    int maxWidth = 0; // Variable to keep track of the maximum width

    while(!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level
        maxWidth = max(maxWidth, levelSize); // Update maximum width if needed

        // Process all nodes at the current level
        for(int i = 0; i < levelSize; i++) {
            Node* curr = q.front();
            q.pop();

            // Add child nodes to the queue
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }

    return maxWidth;
}

//Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(n), where n is the maximum number of nodes at any level in the binary tree (due to the queue).

// Algorithm of the solution:
// 1. If the tree is empty, return 0.
// 2. Initialize a queue for level order traversal and push the root node into it.
// 3. Initialize a variable to keep track of the maximum width.
// 4. While the queue is not empty:
//    a. Get the number of nodes at the current level (levelSize).
//    b. Update the maximum width if the current level size is greater.
//    c. For each node at the current level:
//       i. Pop the front node from the queue.
//       ii. If it has a left child, push it into the queue.
//       iii. If it has a right child, push it into the queue.
// 5. Return the maximum width found.
