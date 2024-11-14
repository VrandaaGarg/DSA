#include <bits/stdc++.h>
using namespace std;

int RemDuplicaye(int arr[],int n){
    int temp[n];

    temp[0]=arr[0];

    int res=1;

    for(int i=0;i<n;i++){
        if(temp[res-1]!=arr[i]){ //if last element of temp is not equal to arr[i]
            temp[res]=arr[i];
            res++;
        }
    }

    for(int i=0;i<res;i++){ //copying temp to arr
        arr[i]=temp[i];
    }
    return res; //returning the size of the array
}

int main(){
    int arr[5]={1,1,2,2,5};
    int n=5;
    n=RemDuplicaye(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}