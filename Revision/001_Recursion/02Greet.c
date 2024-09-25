#include <stdio.h>

void greet(int n){
    if(n==0) return;
    printf("Hello Vranda\n");
    greet(n-1);
    return;
}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    greet(n);
    return 0;
}