#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

///////////////////// BST Class
////////////////////////////

class BST
{
private:
    Node *root;

public:
    BST()
    {
        root = NULL;
    }

    // Function to insert values into the BST
    void insert(int value)
    {
        root = insertBST(root, value);
    }

    // Helper function to insert values into the BST
    Node *insertBST(Node *node, int value)
    {
        if (node == NULL)
        {
            return new Node(value);
        }
        if (value < node->data)
        {
            node->left = insertBST(node->left, value);
        }
        else
        {
            node->right = insertBST(node->right, value);
        }
        return node;
    }
};
