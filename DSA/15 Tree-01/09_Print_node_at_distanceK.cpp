#include <bits/stdc++.h>
using namespace std;

// struct Node function
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

// here basically we print node present at k+1th level nodes from the target node

// Here:
// 1. if the k is 0 then we print the root node
// 2. If root is NULL then we return and do not print anything
// 3. If k is greater than 0 then we recursively call the function for left and right subtrees with k-1

// remeber function type will be void as we are printing the nodes at distance k from the target node

// we print when k=0

void printKDistanceNodes(Node *root, int k)
{
    if (root == NULL) // If the current node is NULL, return
        return;

    if (k == 0) // If k is 0, print the current node's key
    {
        cout << root->key << " ";
        return;
    }

    // Recursively call for left and right subtrees with k-1
    printKDistanceNodes(root->left, k - 1);
    printKDistanceNodes(root->right, k - 1);
}

// worst case time complexity is O(n) where n is the number of nodes in the binary tree
// best case time complexity is O(1)
// space complexity is O(h) where h is the height of the binary tree due to the recursive stack space
