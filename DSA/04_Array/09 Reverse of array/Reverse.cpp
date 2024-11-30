#include <bits/stdc++.h>

using namespace std;

//loop runs n/2 times
void Reverse(int arr[],int n){

    int start=0,end=n-1;
    while(start<=end){ //or start<end 
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//Time complexity: O(n)
//Auxiliary space: O(1)

int main(){
    int arr1[5]={1,4,6,2,3};
    int arr2[6]={2,5,7,1,5,7};

    cout<<"reversed array 1:\n";
    Reverse(arr1,5);
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<"\nreversed array 2:\n";
    Reverse(arr2,6);
    for(int i=0;i<6;i++){
        cout<<arr2[i]<<" ";
    }
}