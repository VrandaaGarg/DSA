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
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   Reverse(arr,n);

   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

}