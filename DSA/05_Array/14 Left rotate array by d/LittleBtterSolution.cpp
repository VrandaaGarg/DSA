#include <bits/stdc++.h>
using namespace std;

void LeftRotate(int arr[],int n,int d){
    int temp[d];

    //Copy first d elements in temp array
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //Shift rest of the array
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //Copy temp array elements to the end of the array
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int d=2;

    LeftRotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Time Complexity: O(d+n-d+d) = O(n)
//Auxiliary Space: O(d) for temp array