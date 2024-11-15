#include <bits/stdc++.h> 

using namespace std;    

int largestElement(vector<int> &arr, int n) {
    //initialize index to 0 means first element is the largest element
    int element=arr[0];

    //iterate through the array and update the index if we find a larger element
    for(int i=1;i<n;i++){
        //if we find a larger element update the index
        if(element<arr[i]){
            element=arr[i];
        }
    }

    return element;
}
