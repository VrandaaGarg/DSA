#include <bits/stdc++.h>
using namespace std;

void RotateArray(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)

int main(){
    int arr[5]={1,2,3,4,5};

    RotateArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}