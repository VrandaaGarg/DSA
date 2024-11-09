#include <bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) {
	int oddOne=0,oddZero=0,evenOne=0,evenZero=0;

	//coounting no. of ones and zeroes on even position
	for(int i=0;i<str.length();i+=2){
		if(str[i]=='0'){
			oddZero++;
		}else{
			oddOne++;
		}
	}

	//coounting no. of ones and zeroes on odd position
	for(int i=1;i<str.length();i+=2){
		if(str[i]=='0'){
			evenZero++;
		}else{
			evenOne++;
		}
	}

	//checking and returning minimum no. of changes
	if((oddOne+evenZero)<(oddZero+evenOne)){
		return oddOne+evenZero;
	}else if ((oddOne+evenZero)>(oddZero+evenOne)){
		return oddZero+evenOne;
	}
	else{
		return oddOne+evenZero;
	}
}