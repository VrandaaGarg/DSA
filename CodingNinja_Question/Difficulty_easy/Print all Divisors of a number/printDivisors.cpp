#include <bits/stdc++.h>

int* printDivisors(int n, int &size){
    int *v = new int[n];
    size=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            v[size]=i;
            size++;
        }
    }
    return v;
}
