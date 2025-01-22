#include <bits/stdc++.h>

using namespace std;

int secondLargestElement(int arr[],int n){
    //arr=[1,2,3,4,5,6,7]  second largest will be 6
    //[12,12,12,12,7] -->> 7 answer
    //[7,7,7,7] ---> -1 answer

    int res=-1,largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }

    return res; //will return index of second largest element
}

int main(){
    int arr1[]={12,12,12,7};   //7 is secondMAx
    int arr2[4]={2,2,2,2};     //As all r same so -1 should be returned

    int secMx;

    secMx=secondLargestElement(arr1,4);
    cout<<"Index of Largest of 1st array: "<<secMx<<"\n";

    secMx=secondLargestElement(arr2,4);
    cout<<"Index of Largest of 2nd array: "<<secMx;


    //less line of code
    // cout << "Second largest of 1st array: " << secondLargestElement(arr1, 6) << "\n";
    // cout << "Second largest of 2nd array: " << secondLargestElement(arr2, 4) << "\n";

    return 0;
}