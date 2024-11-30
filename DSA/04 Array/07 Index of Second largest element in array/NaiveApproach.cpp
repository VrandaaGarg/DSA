#include <bits/stdc++.h>

using namespace std;

int getLargest(int arr[],int n){
    int largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            largest=i;
        }
    }
    return largest;
}

int secondLargest(int arr[],int n){
    int largest=getLargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){

        //going in condition where element is not largest
        if(arr[i]!=arr[largest]){ 
            if(res==-1){
                res=i;
            }else if(arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res; //returning index of second largest element
}

int main(){
    int arr1[6]={1,3,6,2,7,4};   //6 is secondMAx
    int arr2[4]={2,2,2,2};     //As all r same so -1 should be returned

    int secMx;

    secMx=secondLargest(arr1,6);
    cout<<"Index of Largest of 1st array: "<<secMx<<"\n";

    secMx=secondLargest(arr2,4);
    cout<<"Index of Largest of 2nd array: "<<secMx;

    return 0;
}

