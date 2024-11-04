#include <bits/stdc++.h> 

using namespace std;

int sumOfMaxMin(int arr[], int n){
	int min=arr[0];

    //finding minimum element
	for(int i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}

    //finding maximum element
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}

    //returning sum of max and min element
	int sum=min+max;
    
	return sum;
}