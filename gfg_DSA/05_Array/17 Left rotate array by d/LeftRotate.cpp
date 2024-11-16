#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// void reverse(int arr[],int start,int end){
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

void leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}


int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int d=2;

    leftRotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Time Complexity: O(d+n-d+n-d) = O(n)
//Auxiliary Space: O(1) for temp array
