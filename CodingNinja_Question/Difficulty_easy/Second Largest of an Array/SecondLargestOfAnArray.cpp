#include <bits/stdc++.h> 

using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int res=-1,largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            res=largest;
            largest=arr[i];
        }else if(arr[i]!=largest){
            if(res==-1 || arr[i]>res){
                res=arr[i];
            }
        }
    }

    return res; 
}