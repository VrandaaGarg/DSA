#include <bits/stdc++.h> 
int fibonacciNumber(int n){
    int prev=1;
    int sum=1;
    int temp;
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    if(n>2){
        for(int i=3;i<=n;i++){
            temp=sum;
            sum=(sum+prev)%(1000000007); 
            prev=temp;;
        }
    
    }
    return (sum);
}