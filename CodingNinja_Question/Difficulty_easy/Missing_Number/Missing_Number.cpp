#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>&a, int n) {
    int sum = 0;
    int totalSum = n * (n + 1) / 2;
    for(int i = 0; i<a.size() ; i++){
        sum += a[i];
    }

    return totalSum-sum;
}