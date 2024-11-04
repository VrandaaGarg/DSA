#include <bits/stdc++.h>

using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    int subArr[k];
    int n=arr.size();
    for(int i=0;i<k;i++){
        subArr[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=subArr[i];
    }
    return arr;   
}