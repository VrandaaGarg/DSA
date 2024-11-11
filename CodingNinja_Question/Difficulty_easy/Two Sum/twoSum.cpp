#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int,int>> v;
	sort(arr.begin(),arr.end());
	int start=0;
	int end=n-1;
	while(start<end){
		int sum=arr[start]+arr[end];
		if(sum==target){
			v.push_back(make_pair(arr[start],arr[end]));
			start++;
			end--;
		}else if(sum<target){
			start++;
		}else if(sum>target){
			end--;
		}
	}

	if(v.empty()){
		v.push_back(make_pair(-1,-1));
	}

	return v;
}


// vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
// {
// 	vector<pair<int,int>> v;
// 	for(int i=0;i<n;i++){
// 		for(int j=i+1;j<n;j++){
// 			if(arr[i]+arr[j]==target){
// 				v.push_back(make_pair(arr[i],arr[j]));
// 			}
// 		}
// 	}?

// 	return?v;
// }