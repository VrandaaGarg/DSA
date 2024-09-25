#include <stdio.h>

int sum(int n){
    int ans=0;
    if (n==0) return 0;
    ans= n+sum(n-1);
    return ans;
    
}

int main(){
    int n,ans;
    printf("Enter n:");
    scanf("%d",&n);

    ans=sum(n);

    printf("Sum from 1 to %d is: %d",n,ans);
    
    return 0;
}

//////////////OR///////////

// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;
// }