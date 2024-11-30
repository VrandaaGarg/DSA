#include <bits/stdc++.h>

using namespace std;

//Checking only for ascending order
//Efficient approach

void checkAscendingSorted(int arr[],int n){
    int res=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            res=-1;
            break;
        }
    };

    if(res==1){
        cout<<"Sorted array\n";
    }else{
        cout<<"Unsorted array\n";
    }
}

//or simply use bool expression to decrease space complexity

// bool checkAscendingSorted(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

int main(){
    int arr1[5]={10,10,10,10,10};
    int arr2[4]={10,20,30,100};
    int arr3[3]={40,30,20};

    checkAscendingSorted(arr1,5);
    checkAscendingSorted(arr2,4);
    checkAscendingSorted(arr3,3);
}