#include <bits/stdc++.h>
using namespace std;

struct MyHash{
    int BUCKET;
    list<int> *table;
    MyHash(int b){
        BUCKET = b;
        table = new list<int>[BUCKET];
    }
    void insert(int key){
        int i= key % BUCKET; // Hash function to find the index
        table[i].push_back(key); // Insert the key in the list at index i
    }

    void remove(int key){
        int i = key % BUCKET; // Hash function to find the index
        table[i].remove(key); // Remove the key from the list at index i
    }

    bool search(int key){
        int i = key % BUCKET; // Hash function to find the index
        for(auto x : table[i]){ // Iterate through the list at index i
            if(x == key) return true; // If the key is found, return true
        }
        return false; // If the key is not found, return false
    }

};