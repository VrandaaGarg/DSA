#include <bits/stdc++.h>
using namespace std;


//In unsorted Array we can use Linear Search to find the element in the array
int search (int arr[],int n,int x){
    //traverse the array from start to end
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            //if element present in arr return index of the element
            return i;
        }
    }

    //if element is not present in the array return -1
    return -1;
}

//Time Complexity: O(n)
//Worst Case when element is not presnt in the array

