#include <bits/stdc++.h>

using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int firstOcc=-1,lastOcc=-1,feq=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            firstOcc=i;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            feq++;
        }
    }

    if(firstOcc!=-1){
        lastOcc=firstOcc+feq-1;
    }

    return make_pair(firstOcc,lastOcc);
    
}
