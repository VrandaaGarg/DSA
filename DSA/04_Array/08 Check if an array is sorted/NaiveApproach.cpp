#include <bits/stdc++.h>
using namespace std;


//Naive approach
//Time Complexity: O(n^2)
//Space Complexity: O(1)

bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;

    cout<<isSorted(arr,n);

    return 0;
}