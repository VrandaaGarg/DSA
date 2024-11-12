#include <bits/stdc++.h>

using namespace std;

int insert(int arr[],int n,int x,int cap,int pos){
    if(n==cap){
        return n; //if array is full return n
    }

    //index of the position where we want to insert the element
    int idx = pos-1;

    //shift all elements to the right
    for(int i=n-1;i>=idx;i--){
        arr[i+1] = arr[i];
    }

    //insert x at the given position
    arr[idx]=x;

    //return new size of the array
    return n+1;
}


//Time Complexity: O(n)

//Worst case: when we have to insert in beginning of the array
//Insert at the beginning : Theta(n)

//best case: when we have to insert at the end of the array
//Insert at the end : O(1)

