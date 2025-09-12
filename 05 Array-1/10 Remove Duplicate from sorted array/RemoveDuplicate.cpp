#include <bits/stdc++.h>
using namespace std;

int RemDup(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[5]={1,1,2,2,5};
    int newSize = RemDup(arr, 5);
    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}