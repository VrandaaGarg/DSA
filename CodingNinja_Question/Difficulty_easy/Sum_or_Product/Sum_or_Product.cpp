#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

long long int sumOrProduct(long long int n, long long int q)
{
	long long int result;
	if(q==1){
		result=0;
		for(int i=0;i<=n;i++){
			result=result+i;
		}
	}else{
		result=1;
		for(int i=1;i<=n;i++){
			result = (result * i) % mod;	
		}
	}
	return result;
}