#include <bits/stdc++.h>
using namespace std;

void MovingZeros(int arr[],int n){
    int count=0; // count is used to keep track of non-zero elements

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]); // swap the non-zero element with the zero element
            count++; 
        }
    }
}

int main(){
    int arr[8]={0,0,2,0,3,0,0,7};
    int arr2[5]={1,0,2,5,0};

    MovingZeros(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    MovingZeros(arr2,5);
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
}