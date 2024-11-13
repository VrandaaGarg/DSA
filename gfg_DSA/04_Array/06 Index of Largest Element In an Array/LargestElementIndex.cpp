#include <bits/stdc++.h>
using namespace std;

int LargestElementIndex(int arr[],int n){

    //initialize index to 0 means first element is the largest element
    int index=0;

    //iterate through the array and update the index if we find a larger element
    for(int i=1;i<n;i++){
        //if we find a larger element update the index
        if(arr[index]<arr[i]){
            index=i;
        }
    }

    return index;
}

int main(){
    int arr[]={1,5,10,3,2,7};

    int index=LargestElementIndex(arr,6);

    cout<<"Index: "<<index;

    return 0;
}

//Time Complexity: O(n)