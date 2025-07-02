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

//Idea: keep the height as O(log n) by balancing the tree after every insertion and deletion.
//If we are given keys in advance, we can build a balanced BST
//If we know the keys we can make a order which gives us always a balanced BST..first sort the keys
//and then take the middle element as root and then recursively do the same for left and right subtrees

//How to keep it balanced after every insertion and deletion?
//Idea is to do some restructuring of the tree after every insertion and deletion
//this restructuring is done by rotations
