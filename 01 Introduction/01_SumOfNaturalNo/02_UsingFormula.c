#include <stdio.h>

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum=n*(n+1)/2;
    printf("Sum of %d natural no. s: %d",n,sum);

    return 0;
}