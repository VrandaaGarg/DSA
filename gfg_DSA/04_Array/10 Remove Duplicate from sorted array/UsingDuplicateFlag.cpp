#include <bits/stdc++.h>
using namespace std;

int RemoveDuplicate(int arr[],int n){

    bool duplicate=false;

    int newSize=1;

    for(int i=1;i<n;i++){
        duplicate=false;
        if(arr[i]==arr[i-1]){
            duplicate=true;
        }else{
            newSize++;
        }
        if(duplicate==false){
            arr[newSize-1]=arr[i];
        }
    }
    return newSize;
}

int main(){
    int arr[5]={1,1,2,2,5};
    int newSize = RemoveDuplicate(arr, 5);
    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}