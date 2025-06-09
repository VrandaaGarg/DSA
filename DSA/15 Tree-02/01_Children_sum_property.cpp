#include <bits/stdc++.h>
using namespace std;

//Node structure for the binary tree
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

//Children sum property says sum of left and right child should be equal to the parent node
//our func will give boolean value if the tree satisfies the children sum property
//If the node is NULL, we return true
//If the node is a leaf node, we return true

bool isCSum(Node *root)
{
    if (root == NULL) // If the node is NULL, it satisfies the children sum property
        return true;
    if (root->left == NULL && root->right == NULL) // If the node is a leaf node, it satisfies the children sum property
        return true;

    int sum = 0;
    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;
    return (root->key == sum) && isCSum(root->left) && isCSum(root->right); // Check if the current node's key is equal to the sum of its children's keys also recursively check the left and right subtrees

}

