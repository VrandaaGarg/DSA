#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){
    for(int i=0;i<n;i++){

        bool flag=true; //flag true means arr[i] is the largest element
   
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){ //if any element is greater than arr[i] then arr[i] is not the largest element
                flag=false; //set flag to false
                break;
            }
        }
   
        if(flag==true){ //if flag is true then arr[i] is the largest element
            return i;
        }
    }
    
    return -1;
}

int main(){
    int arr[]={1,5,10,3,2,7};

    int index=getLargest(arr,6);

    cout<<"Index: "<<index;

    return 0;
}

// Time Complexity: theta(n^2)
//Best Time Complexity is: theta(n)   when first element is the largest element