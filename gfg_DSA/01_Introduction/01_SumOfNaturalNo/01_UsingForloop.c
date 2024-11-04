#include <stdio.h>

//Using for loop simply sum=sum+i

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of natural no. till %d is %d",n,sum);
    return 0;
}