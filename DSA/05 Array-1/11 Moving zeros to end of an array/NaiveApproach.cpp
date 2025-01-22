#include <bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}

int main(){
    int arr[8]={0,0,2,0,3,0,0,7};
    int arr2[5]={1,0,2,5,0};

    moveZero(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    moveZero(arr2,5);
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
}